#' Fast function using C++ to calculate the Rogers J index of (im)balance.
#' @description The Rogers index is calculated as the total number of internal
#' nodes that are unbalanced, e.g. for which both daughter nodes lead to a
#' different number of extant tips.
#' @param phy phylo object or ltable
#' @return Rogers index
#' @references  J. S. Rogers. Central Moments and Probability Distributions of
#' Three Measures of Phylogenetic Tree Imbalance. Systematic Biology,
#' 45(1):99-110, 1996. doi: 10.1093/sysbio/45.1.99.
#' @export
#' @examples simulated_tree <- ape::rphylo(n = 10, birth = 1, death = 0)
#' brts <- branching_times(simulated_tree)
#' balanced_tree <- nodeSub::create_balanced_tree(brts)
#' unbalanced_tree <- nodeSub::create_unbalanced_tree(brts)
#' rogers(balanced_tree)
#' rogers(unbalanced_tree) # should be higher
rogers <- function(phy) {

  if (inherits(phy, "matrix")) {
    return(calc_rogers_ltable_cpp(phy))
  }
  if (inherits(phy, "phylo")) {
    return(calc_rogers_cpp(as.vector(t(phy$edge))))
  }
  stop("input object has to be phylo or ltable")
}