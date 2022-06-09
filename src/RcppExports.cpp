// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// branching_times_cpp
std::vector< double > branching_times_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_branching_times_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(branching_times_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// branching_times_ltable_cpp
std::vector<double> branching_times_ltable_cpp(const Rcpp::NumericMatrix& mat_in);
RcppExport SEXP _treestats_branching_times_ltable_cpp(SEXP mat_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat_in(mat_inSEXP);
    rcpp_result_gen = Rcpp::wrap(branching_times_ltable_cpp(mat_in));
    return rcpp_result_gen;
END_RCPP
}
// calc_rho_complete_cpp
double calc_rho_complete_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_rho_complete_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rho_complete_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_rho_cpp
double calc_rho_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_rho_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rho_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_rho_ltable_cpp
double calc_rho_ltable_cpp(const Rcpp::NumericMatrix& ltab);
RcppExport SEXP _treestats_calc_rho_ltable_cpp(SEXP ltabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab(ltabSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rho_ltable_cpp(ltab));
    return rcpp_result_gen;
END_RCPP
}
// calc_phylodiv_0_cpp
double calc_phylodiv_0_cpp(const std::vector<double>& edge_length);
RcppExport SEXP _treestats_calc_phylodiv_0_cpp(SEXP edge_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type edge_length(edge_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_phylodiv_0_cpp(edge_length));
    return rcpp_result_gen;
END_RCPP
}
// calc_phylodiv_cpp
double calc_phylodiv_cpp(const Rcpp::List& phy, double t, double extinct_acc);
RcppExport SEXP _treestats_calc_phylodiv_cpp(SEXP phySEXP, SEXP tSEXP, SEXP extinct_accSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type extinct_acc(extinct_accSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_phylodiv_cpp(phy, t, extinct_acc));
    return rcpp_result_gen;
END_RCPP
}
// calc_phylodiv_ltable_cpp
double calc_phylodiv_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_calc_phylodiv_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_phylodiv_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_mean_branch_length_cpp
double calc_mean_branch_length_cpp(const std::vector<double>& edge_length);
RcppExport SEXP _treestats_calc_mean_branch_length_cpp(SEXP edge_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type edge_length(edge_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mean_branch_length_cpp(edge_length));
    return rcpp_result_gen;
END_RCPP
}
// calc_mean_branch_length_ltable_cpp
double calc_mean_branch_length_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_calc_mean_branch_length_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mean_branch_length_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_gamma_cpp
double calc_gamma_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_gamma_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_gamma_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_gamma_ltable_cpp
double calc_gamma_ltable_cpp(const Rcpp::NumericMatrix& ltab_in);
RcppExport SEXP _treestats_calc_gamma_ltable_cpp(SEXP ltab_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab_in(ltab_inSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_gamma_ltable_cpp(ltab_in));
    return rcpp_result_gen;
END_RCPP
}
// calc_nltt_cpp
double calc_nltt_cpp(const Rcpp::List& phy1, const Rcpp::List& phy2);
RcppExport SEXP _treestats_calc_nltt_cpp(SEXP phy1SEXP, SEXP phy2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy1(phy1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy2(phy2SEXP);
    rcpp_result_gen = Rcpp::wrap(calc_nltt_cpp(phy1, phy2));
    return rcpp_result_gen;
END_RCPP
}
// calc_nltt_ltable_cpp
double calc_nltt_ltable_cpp(const Rcpp::NumericMatrix& ltab1, const Rcpp::NumericMatrix& ltab2);
RcppExport SEXP _treestats_calc_nltt_ltable_cpp(SEXP ltab1SEXP, SEXP ltab2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab1(ltab1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab2(ltab2SEXP);
    rcpp_result_gen = Rcpp::wrap(calc_nltt_ltable_cpp(ltab1, ltab2));
    return rcpp_result_gen;
END_RCPP
}
// calc_crown_age_cpp
double calc_crown_age_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_crown_age_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_crown_age_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_colless_cpp
double calc_colless_cpp(const std::vector<long>& parent_list, std::string normalization);
RcppExport SEXP _treestats_calc_colless_cpp(SEXP parent_listSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    Rcpp::traits::input_parameter< std::string >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_colless_cpp(parent_list, normalization));
    return rcpp_result_gen;
END_RCPP
}
// calc_colless_ltable_cpp
double calc_colless_ltable_cpp(const Rcpp::NumericMatrix& l_from_R, std::string normalization);
RcppExport SEXP _treestats_calc_colless_ltable_cpp(SEXP l_from_RSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    Rcpp::traits::input_parameter< std::string >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_colless_ltable_cpp(l_from_R, normalization));
    return rcpp_result_gen;
END_RCPP
}
// calc_eWcolless_cpp
double calc_eWcolless_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_eWcolless_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_eWcolless_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_eWcolless_ltable_cpp
double calc_eWcolless_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_eWcolless_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_eWcolless_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// ILnumber_cpp
size_t ILnumber_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_ILnumber_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(ILnumber_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// ILnumber_ltable_cpp
size_t ILnumber_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_ILnumber_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(ILnumber_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_rquartet_cpp
double calc_rquartet_cpp(const std::vector<long>& tree_edge, std::string normalization);
RcppExport SEXP _treestats_calc_rquartet_cpp(SEXP tree_edgeSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    Rcpp::traits::input_parameter< std::string >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rquartet_cpp(tree_edge, normalization));
    return rcpp_result_gen;
END_RCPP
}
// calc_rquartet_ltable_cpp
double calc_rquartet_ltable_cpp(const Rcpp::NumericMatrix& ltable_R, std::string normalization);
RcppExport SEXP _treestats_calc_rquartet_ltable_cpp(SEXP ltable_RSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    Rcpp::traits::input_parameter< std::string >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rquartet_ltable_cpp(ltable_R, normalization));
    return rcpp_result_gen;
END_RCPP
}
// stairs_cpp
double stairs_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_stairs_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(stairs_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// stairs_ltable_cpp
double stairs_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_stairs_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(stairs_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// stairs2_cpp
double stairs2_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_stairs2_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(stairs2_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// stairs2_ltable_cpp
double stairs2_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_stairs2_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(stairs2_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_rogers_cpp
int calc_rogers_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_rogers_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rogers_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_rogers_ltable_cpp
double calc_rogers_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_rogers_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_rogers_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_Ibased_cpp
double calc_Ibased_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_Ibased_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Ibased_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_Ibased_ltable_cpp
double calc_Ibased_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_Ibased_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Ibased_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// pitchforks_ltable_cpp
size_t pitchforks_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_pitchforks_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(pitchforks_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_del_width_cpp
int calc_max_del_width_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_max_del_width_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_del_width_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_del_width_ltable_cpp
double calc_max_del_width_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_max_del_width_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_del_width_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_width_cpp
int calc_max_width_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_max_width_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_width_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_width_ltable_cpp
double calc_max_width_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_max_width_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_width_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_depth_cpp
int calc_max_depth_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_max_depth_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_depth_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_max_depth_ltable_cpp
double calc_max_depth_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_max_depth_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_max_depth_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_leaf_depth_cpp
double calc_var_leaf_depth_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_var_leaf_depth_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_leaf_depth_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_leaf_depth_ltable_cpp
double calc_var_leaf_depth_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_var_leaf_depth_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_leaf_depth_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_sym_nodes_cpp
int calc_sym_nodes_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_sym_nodes_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_sym_nodes_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_b1_cpp
double calc_b1_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_b1_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_b1_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_b1_ltable_cpp
double calc_b1_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_b1_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_b1_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_b2_cpp
double calc_b2_cpp(const std::vector<long>& parent_list);
RcppExport SEXP _treestats_calc_b2_cpp(SEXP parent_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type parent_list(parent_listSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_b2_cpp(parent_list));
    return rcpp_result_gen;
END_RCPP
}
// calc_b2_ltable_cpp
double calc_b2_ltable_cpp(const Rcpp::NumericMatrix& l_from_R);
RcppExport SEXP _treestats_calc_b2_ltable_cpp(SEXP l_from_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type l_from_R(l_from_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_b2_ltable_cpp(l_from_R));
    return rcpp_result_gen;
END_RCPP
}
// prep_lapl_spec
Rcpp::NumericMatrix prep_lapl_spec(const Rcpp::List& phy);
RcppExport SEXP _treestats_prep_lapl_spec(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(prep_lapl_spec(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_beta_cpp
double calc_beta_cpp(const Rcpp::List& phy, double upper_lim, std::string algorithm, double abs_tol, double rel_tol);
RcppExport SEXP _treestats_calc_beta_cpp(SEXP phySEXP, SEXP upper_limSEXP, SEXP algorithmSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    Rcpp::traits::input_parameter< double >::type upper_lim(upper_limSEXP);
    Rcpp::traits::input_parameter< std::string >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_beta_cpp(phy, upper_lim, algorithm, abs_tol, rel_tol));
    return rcpp_result_gen;
END_RCPP
}
// calc_beta_ltable_cpp
double calc_beta_ltable_cpp(const Rcpp::NumericMatrix& ltable, double upper_lim, std::string algorithm, double abs_tol, double rel_tol);
RcppExport SEXP _treestats_calc_beta_ltable_cpp(SEXP ltableSEXP, SEXP upper_limSEXP, SEXP algorithmSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable(ltableSEXP);
    Rcpp::traits::input_parameter< double >::type upper_lim(upper_limSEXP);
    Rcpp::traits::input_parameter< std::string >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_beta_ltable_cpp(ltable, upper_lim, algorithm, abs_tol, rel_tol));
    return rcpp_result_gen;
END_RCPP
}
// phylo_to_l
Rcpp::NumericMatrix phylo_to_l(const Rcpp::List& phy);
RcppExport SEXP _treestats_phylo_to_l(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(phylo_to_l(phy));
    return rcpp_result_gen;
END_RCPP
}
// test_dist_tri
Rcpp::NumericMatrix test_dist_tri(const Rcpp::List& phy);
RcppExport SEXP _treestats_test_dist_tri(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(test_dist_tri(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_mpd_tri_cpp
double calc_mpd_tri_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_mpd_tri_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mpd_tri_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_mpd_cpp
double calc_mpd_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_mpd_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mpd_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_psv_cpp
double calc_psv_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_psv_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_psv_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_J_cpp
double calc_J_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_J_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_J_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_mntd_cpp
double calc_mntd_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_mntd_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mntd_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// calc_mntd_ltable_cpp
double calc_mntd_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_calc_mntd_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mntd_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_mpd_cpp
double calc_var_mpd_cpp(const Rcpp::List& phy);
RcppExport SEXP _treestats_calc_var_mpd_cpp(SEXP phySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type phy(phySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_mpd_cpp(phy));
    return rcpp_result_gen;
END_RCPP
}
// avgLadder_cpp
double avgLadder_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_avgLadder_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(avgLadder_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// l_to_newick
std::string l_to_newick(const Rcpp::NumericMatrix& ltable_R, bool drop_extinct);
RcppExport SEXP _treestats_l_to_newick(SEXP ltable_RSEXP, SEXP drop_extinctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    Rcpp::traits::input_parameter< bool >::type drop_extinct(drop_extinctSEXP);
    rcpp_result_gen = Rcpp::wrap(l_to_newick(ltable_R, drop_extinct));
    return rcpp_result_gen;
END_RCPP
}
// l_to_newick_ed_cpp
std::string l_to_newick_ed_cpp(const Rcpp::NumericMatrix& ltable_R, const double t, bool drop_extinct);
RcppExport SEXP _treestats_l_to_newick_ed_cpp(SEXP ltable_RSEXP, SEXP tSEXP, SEXP drop_extinctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    Rcpp::traits::input_parameter< const double >::type t(tSEXP);
    Rcpp::traits::input_parameter< bool >::type drop_extinct(drop_extinctSEXP);
    rcpp_result_gen = Rcpp::wrap(l_to_newick_ed_cpp(ltable_R, t, drop_extinct));
    return rcpp_result_gen;
END_RCPP
}
// calc_sackin_cpp
double calc_sackin_cpp(const std::vector<long>& tree_edge, const Rcpp::String& normalization);
RcppExport SEXP _treestats_calc_sackin_cpp(SEXP tree_edgeSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String& >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_sackin_cpp(tree_edge, normalization));
    return rcpp_result_gen;
END_RCPP
}
// calc_sackin_ltable_cpp
double calc_sackin_ltable_cpp(const Rcpp::NumericMatrix& ltab, const Rcpp::String& normalization);
RcppExport SEXP _treestats_calc_sackin_ltable_cpp(SEXP ltabSEXP, SEXP normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab(ltabSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String& >::type normalization(normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_sackin_ltable_cpp(ltab, normalization));
    return rcpp_result_gen;
END_RCPP
}
// calc_tot_coph_cpp
double calc_tot_coph_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_calc_tot_coph_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_tot_coph_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// calc_tot_coph_ltable_cpp
double calc_tot_coph_ltable_cpp(const Rcpp::NumericMatrix& ltab);
RcppExport SEXP _treestats_calc_tot_coph_ltable_cpp(SEXP ltabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab(ltabSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_tot_coph_ltable_cpp(ltab));
    return rcpp_result_gen;
END_RCPP
}
// calc_blum_cpp
double calc_blum_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_calc_blum_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_blum_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// calc_blum_ltable_cpp
double calc_blum_ltable_cpp(const Rcpp::NumericMatrix& ltab_in);
RcppExport SEXP _treestats_calc_blum_ltable_cpp(SEXP ltab_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltab_in(ltab_inSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_blum_ltable_cpp(ltab_in));
    return rcpp_result_gen;
END_RCPP
}
// cherries_cpp
size_t cherries_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_cherries_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cherries_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}
// cherries_ltable_cpp
size_t cherries_ltable_cpp(const Rcpp::NumericMatrix& ltable_R);
RcppExport SEXP _treestats_cherries_ltable_cpp(SEXP ltable_RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type ltable_R(ltable_RSEXP);
    rcpp_result_gen = Rcpp::wrap(cherries_ltable_cpp(ltable_R));
    return rcpp_result_gen;
END_RCPP
}
// pitchforks_cpp
size_t pitchforks_cpp(const std::vector<long>& tree_edge);
RcppExport SEXP _treestats_pitchforks_cpp(SEXP tree_edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<long>& >::type tree_edge(tree_edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(pitchforks_cpp(tree_edge));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treestats_branching_times_cpp", (DL_FUNC) &_treestats_branching_times_cpp, 1},
    {"_treestats_branching_times_ltable_cpp", (DL_FUNC) &_treestats_branching_times_ltable_cpp, 1},
    {"_treestats_calc_rho_complete_cpp", (DL_FUNC) &_treestats_calc_rho_complete_cpp, 1},
    {"_treestats_calc_rho_cpp", (DL_FUNC) &_treestats_calc_rho_cpp, 1},
    {"_treestats_calc_rho_ltable_cpp", (DL_FUNC) &_treestats_calc_rho_ltable_cpp, 1},
    {"_treestats_calc_phylodiv_0_cpp", (DL_FUNC) &_treestats_calc_phylodiv_0_cpp, 1},
    {"_treestats_calc_phylodiv_cpp", (DL_FUNC) &_treestats_calc_phylodiv_cpp, 3},
    {"_treestats_calc_phylodiv_ltable_cpp", (DL_FUNC) &_treestats_calc_phylodiv_ltable_cpp, 1},
    {"_treestats_calc_mean_branch_length_cpp", (DL_FUNC) &_treestats_calc_mean_branch_length_cpp, 1},
    {"_treestats_calc_mean_branch_length_ltable_cpp", (DL_FUNC) &_treestats_calc_mean_branch_length_ltable_cpp, 1},
    {"_treestats_calc_gamma_cpp", (DL_FUNC) &_treestats_calc_gamma_cpp, 1},
    {"_treestats_calc_gamma_ltable_cpp", (DL_FUNC) &_treestats_calc_gamma_ltable_cpp, 1},
    {"_treestats_calc_nltt_cpp", (DL_FUNC) &_treestats_calc_nltt_cpp, 2},
    {"_treestats_calc_nltt_ltable_cpp", (DL_FUNC) &_treestats_calc_nltt_ltable_cpp, 2},
    {"_treestats_calc_crown_age_cpp", (DL_FUNC) &_treestats_calc_crown_age_cpp, 1},
    {"_treestats_calc_colless_cpp", (DL_FUNC) &_treestats_calc_colless_cpp, 2},
    {"_treestats_calc_colless_ltable_cpp", (DL_FUNC) &_treestats_calc_colless_ltable_cpp, 2},
    {"_treestats_calc_eWcolless_cpp", (DL_FUNC) &_treestats_calc_eWcolless_cpp, 1},
    {"_treestats_calc_eWcolless_ltable_cpp", (DL_FUNC) &_treestats_calc_eWcolless_ltable_cpp, 1},
    {"_treestats_ILnumber_cpp", (DL_FUNC) &_treestats_ILnumber_cpp, 1},
    {"_treestats_ILnumber_ltable_cpp", (DL_FUNC) &_treestats_ILnumber_ltable_cpp, 1},
    {"_treestats_calc_rquartet_cpp", (DL_FUNC) &_treestats_calc_rquartet_cpp, 2},
    {"_treestats_calc_rquartet_ltable_cpp", (DL_FUNC) &_treestats_calc_rquartet_ltable_cpp, 2},
    {"_treestats_stairs_cpp", (DL_FUNC) &_treestats_stairs_cpp, 1},
    {"_treestats_stairs_ltable_cpp", (DL_FUNC) &_treestats_stairs_ltable_cpp, 1},
    {"_treestats_stairs2_cpp", (DL_FUNC) &_treestats_stairs2_cpp, 1},
    {"_treestats_stairs2_ltable_cpp", (DL_FUNC) &_treestats_stairs2_ltable_cpp, 1},
    {"_treestats_calc_rogers_cpp", (DL_FUNC) &_treestats_calc_rogers_cpp, 1},
    {"_treestats_calc_rogers_ltable_cpp", (DL_FUNC) &_treestats_calc_rogers_ltable_cpp, 1},
    {"_treestats_calc_Ibased_cpp", (DL_FUNC) &_treestats_calc_Ibased_cpp, 1},
    {"_treestats_calc_Ibased_ltable_cpp", (DL_FUNC) &_treestats_calc_Ibased_ltable_cpp, 1},
    {"_treestats_pitchforks_ltable_cpp", (DL_FUNC) &_treestats_pitchforks_ltable_cpp, 1},
    {"_treestats_calc_max_del_width_cpp", (DL_FUNC) &_treestats_calc_max_del_width_cpp, 1},
    {"_treestats_calc_max_del_width_ltable_cpp", (DL_FUNC) &_treestats_calc_max_del_width_ltable_cpp, 1},
    {"_treestats_calc_max_width_cpp", (DL_FUNC) &_treestats_calc_max_width_cpp, 1},
    {"_treestats_calc_max_width_ltable_cpp", (DL_FUNC) &_treestats_calc_max_width_ltable_cpp, 1},
    {"_treestats_calc_max_depth_cpp", (DL_FUNC) &_treestats_calc_max_depth_cpp, 1},
    {"_treestats_calc_max_depth_ltable_cpp", (DL_FUNC) &_treestats_calc_max_depth_ltable_cpp, 1},
    {"_treestats_calc_var_leaf_depth_cpp", (DL_FUNC) &_treestats_calc_var_leaf_depth_cpp, 1},
    {"_treestats_calc_var_leaf_depth_ltable_cpp", (DL_FUNC) &_treestats_calc_var_leaf_depth_ltable_cpp, 1},
    {"_treestats_calc_sym_nodes_cpp", (DL_FUNC) &_treestats_calc_sym_nodes_cpp, 1},
    {"_treestats_calc_b1_cpp", (DL_FUNC) &_treestats_calc_b1_cpp, 1},
    {"_treestats_calc_b1_ltable_cpp", (DL_FUNC) &_treestats_calc_b1_ltable_cpp, 1},
    {"_treestats_calc_b2_cpp", (DL_FUNC) &_treestats_calc_b2_cpp, 1},
    {"_treestats_calc_b2_ltable_cpp", (DL_FUNC) &_treestats_calc_b2_ltable_cpp, 1},
    {"_treestats_prep_lapl_spec", (DL_FUNC) &_treestats_prep_lapl_spec, 1},
    {"_treestats_calc_beta_cpp", (DL_FUNC) &_treestats_calc_beta_cpp, 5},
    {"_treestats_calc_beta_ltable_cpp", (DL_FUNC) &_treestats_calc_beta_ltable_cpp, 5},
    {"_treestats_phylo_to_l", (DL_FUNC) &_treestats_phylo_to_l, 1},
    {"_treestats_test_dist_tri", (DL_FUNC) &_treestats_test_dist_tri, 1},
    {"_treestats_calc_mpd_tri_cpp", (DL_FUNC) &_treestats_calc_mpd_tri_cpp, 1},
    {"_treestats_calc_mpd_cpp", (DL_FUNC) &_treestats_calc_mpd_cpp, 1},
    {"_treestats_calc_psv_cpp", (DL_FUNC) &_treestats_calc_psv_cpp, 1},
    {"_treestats_calc_J_cpp", (DL_FUNC) &_treestats_calc_J_cpp, 1},
    {"_treestats_calc_mntd_cpp", (DL_FUNC) &_treestats_calc_mntd_cpp, 1},
    {"_treestats_calc_mntd_ltable_cpp", (DL_FUNC) &_treestats_calc_mntd_ltable_cpp, 1},
    {"_treestats_calc_var_mpd_cpp", (DL_FUNC) &_treestats_calc_var_mpd_cpp, 1},
    {"_treestats_avgLadder_cpp", (DL_FUNC) &_treestats_avgLadder_cpp, 1},
    {"_treestats_l_to_newick", (DL_FUNC) &_treestats_l_to_newick, 2},
    {"_treestats_l_to_newick_ed_cpp", (DL_FUNC) &_treestats_l_to_newick_ed_cpp, 3},
    {"_treestats_calc_sackin_cpp", (DL_FUNC) &_treestats_calc_sackin_cpp, 2},
    {"_treestats_calc_sackin_ltable_cpp", (DL_FUNC) &_treestats_calc_sackin_ltable_cpp, 2},
    {"_treestats_calc_tot_coph_cpp", (DL_FUNC) &_treestats_calc_tot_coph_cpp, 1},
    {"_treestats_calc_tot_coph_ltable_cpp", (DL_FUNC) &_treestats_calc_tot_coph_ltable_cpp, 1},
    {"_treestats_calc_blum_cpp", (DL_FUNC) &_treestats_calc_blum_cpp, 1},
    {"_treestats_calc_blum_ltable_cpp", (DL_FUNC) &_treestats_calc_blum_ltable_cpp, 1},
    {"_treestats_cherries_cpp", (DL_FUNC) &_treestats_cherries_cpp, 1},
    {"_treestats_cherries_ltable_cpp", (DL_FUNC) &_treestats_cherries_ltable_cpp, 1},
    {"_treestats_pitchforks_cpp", (DL_FUNC) &_treestats_pitchforks_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_treestats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
