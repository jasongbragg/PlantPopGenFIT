// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// simulation
List simulation(int tsteps, NumericVector mortality, IntegerMatrix demo, IntegerMatrix gt, IntegerVector K, NumericMatrix dispersal, double selfing, NumericVector locus_effect, NumericVector dominance_effect, NumericVector phenotype_opt, double n_p, double n_k, double mutation);
RcppExport SEXP _PlantPopGenFIT_simulation(SEXP tstepsSEXP, SEXP mortalitySEXP, SEXP demoSEXP, SEXP gtSEXP, SEXP KSEXP, SEXP dispersalSEXP, SEXP selfingSEXP, SEXP locus_effectSEXP, SEXP dominance_effectSEXP, SEXP phenotype_optSEXP, SEXP n_pSEXP, SEXP n_kSEXP, SEXP mutationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type tsteps(tstepsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mortality(mortalitySEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type demo(demoSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type gt(gtSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dispersal(dispersalSEXP);
    Rcpp::traits::input_parameter< double >::type selfing(selfingSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type locus_effect(locus_effectSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dominance_effect(dominance_effectSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phenotype_opt(phenotype_optSEXP);
    Rcpp::traits::input_parameter< double >::type n_p(n_pSEXP);
    Rcpp::traits::input_parameter< double >::type n_k(n_kSEXP);
    Rcpp::traits::input_parameter< double >::type mutation(mutationSEXP);
    rcpp_result_gen = Rcpp::wrap(simulation(tsteps, mortality, demo, gt, K, dispersal, selfing, locus_effect, dominance_effect, phenotype_opt, n_p, n_k, mutation));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _PlantPopGenFIT_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PlantPopGenFIT_simulation", (DL_FUNC) &_PlantPopGenFIT_simulation, 13},
    {"_PlantPopGenFIT_rcpp_hello_world", (DL_FUNC) &_PlantPopGenFIT_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_PlantPopGenFIT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}