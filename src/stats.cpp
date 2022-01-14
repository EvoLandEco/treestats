#include <Rcpp.h>

#include "beta.h"
#include "nltt.h"
#include "sackin.h"
#include "gamma.h"
#include "phylodiv.h"
#include "pigot_rho.h"
#include "phylo2L.h"


// [[Rcpp::export]]
double calc_beta_cpp(const Rcpp::List& phy,
                     double upper_lim) {

  try {
    auto ltab = phylo_to_l_cpp(phy);

    double output = calc_beta(ltab, -2, upper_lim);
    return output;
  } catch(std::exception &ex) {
    forward_exception_to_r(ex);
  } catch(...) {
    ::Rf_error("c++ exception (unknown reason)");
  }
  return NA_REAL;
}


// [[Rcpp::export]]
double calc_sackin_cpp(const Rcpp::List phy,
                       std::string normalization) {

  try {
    Rcpp::NumericMatrix edge = phy["edge"];
    std::vector< std::array< size_t, 2 >> local_edge(edge.nrow());
    for (size_t i = 0; i < edge.nrow(); ++i) {
      local_edge[i] = {static_cast<size_t>(edge(i, 0)),
                       static_cast<size_t>(edge(i, 1))};
    }

    sackin_stat s(local_edge);

    size_t output = s.calc_sackin();

    if (normalization == "yule") {
      Rcpp::NumericVector tip_label = phy["tip.label"];
      size_t n = tip_label.size();
      output = correct_yule(n, output);
    }
    if (normalization == "pda") {
      Rcpp::NumericVector tip_label = phy["tip.label"];
      size_t n = tip_label.size();
      output = correct_pda(n, output);
    }
    return output;
  } catch(std::exception &ex) {
    forward_exception_to_r(ex);
  } catch(...) {
    ::Rf_error("c++ exception (unknown reason)");
  }
  return NA_REAL;
}


// [[Rcpp::export]]
double calc_nltt_cpp(const Rcpp::List& phy1,
                     const Rcpp::List& phy2) {

  std::vector<double> brts_one = branching_times(phy1);
  std::vector<double> brts_two = branching_times(phy2);
  std::sort(brts_one.begin(), brts_one.end(), std::greater<double>());
  std::sort(brts_two.begin(), brts_two.end(), std::greater<double>());
  for (auto& i : brts_one) {
    i *= -1;
  }
  for (auto& i : brts_two) {
    i *= -1;
  }
  brts_one.push_back(0.0);
  brts_two.push_back(0.0);
  auto nltt = calc_nltt(brts_one, brts_two);
  return nltt;
}


// [[Rcpp::export]]
double calc_gamma_cpp(const Rcpp::List& phy) {
try {
  std::vector<double> brts = branching_times(phy);
  return calc_gamma(brts);

} catch(std::exception &ex) {
  forward_exception_to_r(ex);
} catch(std::out_of_range& oor) {
  Rcpp::Rcout << "Out of Range error: " << oor.what() << '\n';
} catch(...) {
  ::Rf_error("c++ exception (unknown reason)");
}
return NA_REAL;
}

// [[Rcpp::export]]
double calc_phylodiv_cpp(const Rcpp::List& phy,
                         double t,
                         double crown_age,
                         double extinct_acc) {
try {

  Rcpp::NumericMatrix edge = phy["edge"];
  Rcpp::NumericVector edge_length = phy["edge.length"];

  std::vector<double> el(edge_length.begin(), edge_length.end());
  std::vector< std::array<int, 2>> edges(edge.nrow());
  for (size_t i = 0; i < edge.nrow(); i++) {
    std::array<int, 2> to_add = {static_cast<int>(edge(i, 0)),
                                 static_cast<int>(edge(i, 1))};
    edges[i] = to_add;
  }

  phylo phylo_tree(edges, el);

  return calculate_phylogenetic_diversity(phylo_tree, t, crown_age, extinct_acc);

} catch(std::exception &ex) {
  forward_exception_to_r(ex);
} catch(...) {
  ::Rf_error("c++ exception (unknown reason)");
}
return NA_REAL;
}


// [[Rcpp::export]]
double calc_rho_cpp(const Rcpp::List& phy,
                    double crown_age) {
  try {

    Rcpp::NumericMatrix edge = phy["edge"];
    Rcpp::NumericVector edge_length = phy["edge.length"];

    std::vector<double> el(edge_length.begin(), edge_length.end());
    std::vector< std::array<int, 2>> edges(edge.nrow());
    for (size_t i = 0; i < edge.nrow(); i++) {
      std::array<int, 2> to_add = {static_cast<int>(edge(i, 0)),
                                   static_cast<int>(edge(i, 1))};
      edges[i] = to_add;
    }

    phylo phylo_tree(edges, el);
    rho pigot_rho(phylo_tree, crown_age);
    return pigot_rho.calc_pigot_rho();

  } catch(std::exception &ex) {
    forward_exception_to_r(ex);
  } catch(...) {
    ::Rf_error("c++ exception (unknown reason)");
  }
  return NA_REAL;
}

//' function to generate ltable from phy object
//' @param phy phylo object
//' @export
// [[Rcpp::export]]
Rcpp::NumericMatrix phylo_to_l(const Rcpp::List& phy) {
  const size_t ncol = 4;
  std::vector< std::array< double, ncol> > ltab = phylo_to_l_cpp(phy);

  size_t nrow = ltab.size();
  Rcpp::NumericMatrix out(nrow, ncol);

  for (size_t i = 0; i < ltab.size(); ++i) {
    for (size_t j = 0; j < ncol; ++j) {
      out(i, j) = ltab[i][j];
    }
  }
  return out;
}




// old stuff
 /*
double calc_nltt_cpp_old(const Rcpp::NumericVector& brts_one,
                         const Rcpp::NumericVector& brts_two) {

  try {
    std::vector<double> v1(brts_one.begin(), brts_one.end());
    std::vector<double> v2(brts_two.begin(), brts_two.end());

    auto nltt = calc_nltt(v1, v2);
    return nltt;
  } catch(std::exception &ex) {
    forward_exception_to_r(ex);
  } catch(...) {
    ::Rf_error("c++ exception (unknown reason)");
  }
  return NA_REAL;
}
*/
