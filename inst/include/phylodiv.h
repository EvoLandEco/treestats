#ifndef phylo_div_h
#define phylo_div_h

#include <vector>


struct branch {

  branch(double bd, int pl, int lab, double ext, double branch_length) :
  start_date(bd),
  parent_label(pl),
  label(lab),
  end_date(ext),
  bl(branch_length)
  {}

  double start_date;
  int parent_label;
  int label;
  double end_date;
  double bl;
};

void sort_edge_and_edgelength(std::vector< std::array<size_t, 2 >>& edge,
                              std::vector<double>& edge_length) {
  struct entry {
    std::array<size_t, 2> ed;
    double bl;
  };

  std::vector<entry> everything(edge.size());
  for (size_t i = 0; i < edge.size(); ++i) {
    everything[i].bl = edge_length[i];
    everything[i].ed = edge[i];
 }

  std::sort(everything.begin(), everything.end(),
            [&](auto a, auto b)
            {return a.ed[0] < b.ed[0];});

  // now place back
  for (size_t i = 0; i < everything.size(); ++i) {
    edge[i] = everything[i].ed;
    edge_length[i] = everything[i].bl;
  }
}



struct phylo {

  std::vector< std::array<size_t, 2>> edge;
  std::vector< double > edge_length;

  phylo(const std::vector< std::array<size_t, 2>> e,
        const std::vector<double> el) : edge(e), edge_length(el) {

    // sort the tree!
    sort_edge_and_edgelength(edge, edge_length);

  }
};


double get_start_date(const std::vector<branch>& branchset,
                     int parent_label) {

  for (const auto& i : branchset) {
    if (i.label == parent_label) {
      return(i.end_date);
    }
  }
  throw std::runtime_error("can not find parent");
}

bool has_no_daughters(const std::vector<branch>& bs,
                      size_t parent_label) {
  // find any branches that share this parent
  for (const auto& i : bs) {
    if (i.parent_label == parent_label) {
      return false;
    }
  }
  return true;
}

std::vector< branch > remove_from_branchset(std::vector<branch> bs,
                                            size_t label) {

  size_t index = 0;
  for (; index < bs.size(); ++index) {
    if (bs[index].label == label)
      break;
  }
  if (index >= bs.size()) {
    throw std::runtime_error("index >= bs.size");
  }
  size_t parent_label = bs[index].parent_label;
  // remove focal branch
  bs[index] = bs.back();
  bs.pop_back();

  // now check if parent has daughters
  if (has_no_daughters(bs, parent_label)) {
    bs = remove_from_branchset(bs, parent_label);
  }
  return bs;
}


std::vector< branch > create_branch_set(const phylo& phy,
                                        double max_t,
                                        double crown_age,
                                        double extinct_acc) {

  std::vector< branch > branchset;
  size_t crown = phy.edge[0][0];
  size_t crown2 = 2 + phy.edge_length.size() * 0.5;

  std::vector < std::array< double, 2 >> tip_times;
  for (size_t i = 0; i < phy.edge.size(); ++i) {
    size_t parent_label = phy.edge[i][0];

    double start_date = 0.f;
    if (parent_label != crown) {
      start_date = get_start_date(branchset, parent_label);
    }

    if (start_date > max_t)
      continue;

    size_t own_label   = phy.edge[i][1];
    double bl = phy.edge_length[i];
    double end_date = start_date + bl;

    if (end_date > max_t) {
      end_date = max_t;
      bl = end_date - start_date;
    }
    if (own_label < crown ) {
      if (end_date < crown_age && end_date < max_t) {
        tip_times.push_back({static_cast<double>(own_label), end_date});
      }
    }

    branch new_branch(start_date, parent_label, own_label, end_date, bl);
    branchset.push_back(new_branch);
  }

  if (!tip_times.empty()) {
    double limit = crown_age;
    if (max_t < limit) limit = max_t;
    for (int i = 0; i < tip_times.size(); ++i) {
      if (limit - tip_times[i][1] > extinct_acc) {
        branchset = remove_from_branchset(branchset, tip_times[i][0]);
      }
    }
  }

  return(branchset);
}

double calculate_phylogenetic_diversity(const phylo& phy,
                                        double t,
                                        double crown_age,
                                        double extinct_acc) {
  std::vector< branch > branchset = create_branch_set(phy, t,
                                                      crown_age, extinct_acc);

  double pd = 0.f;
  for (auto it = branchset.cbegin(); it != branchset.cend(); ++it) {
    pd += it->bl;
  }
  return pd;
}


#endif
