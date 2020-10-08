// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RCaN.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// cpgs
Eigen::MatrixXd cpgs(const int N, const Eigen::MatrixXd& A, const Eigen::VectorXd& b, const Eigen::VectorXd& x0, const int thin, const bool test, const int seed, const int stream);
static SEXP _RCaN_cpgs_try(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP testSEXP, SEXP seedSEXP, SEXP streamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type stream(streamSEXP);
    rcpp_result_gen = Rcpp::wrap(cpgs(N, A, b, x0, thin, test, seed, stream));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RCaN_cpgs(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP testSEXP, SEXP seedSEXP, SEXP streamSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RCaN_cpgs_try(NSEXP, ASEXP, bSEXP, x0SEXP, thinSEXP, testSEXP, seedSEXP, streamSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// cpgsEquality
Eigen::MatrixXd cpgsEquality(const int N, const Eigen::MatrixXd& A, const Eigen::VectorXd& b, const Eigen::MatrixXd& C, const Eigen::VectorXd& v, const Eigen::VectorXd& x0, const int thin, const bool test, const int seed, const int stream);
static SEXP _RCaN_cpgsEquality_try(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP CSEXP, SEXP vSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP testSEXP, SEXP seedSEXP, SEXP streamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type stream(streamSEXP);
    rcpp_result_gen = Rcpp::wrap(cpgsEquality(N, A, b, C, v, x0, thin, test, seed, stream));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RCaN_cpgsEquality(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP CSEXP, SEXP vSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP testSEXP, SEXP seedSEXP, SEXP streamSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RCaN_cpgsEquality_try(NSEXP, ASEXP, bSEXP, CSEXP, vSEXP, x0SEXP, thinSEXP, testSEXP, seedSEXP, streamSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fitCaN
List fitCaN(const int N, const Eigen::MatrixXd& A, const Eigen::VectorXd& b, const Eigen::MatrixXd& C, const Eigen::VectorXd& v, const Eigen::MatrixXd& L, const Eigen::VectorXd& x0, const int thin, const int seed, const int stream);
static SEXP _RCaN_fitCaN_try(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP CSEXP, SEXP vSEXP, SEXP LSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP seedSEXP, SEXP streamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type stream(streamSEXP);
    rcpp_result_gen = Rcpp::wrap(fitCaN(N, A, b, C, v, L, x0, thin, seed, stream));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RCaN_fitCaN(SEXP NSEXP, SEXP ASEXP, SEXP bSEXP, SEXP CSEXP, SEXP vSEXP, SEXP LSEXP, SEXP x0SEXP, SEXP thinSEXP, SEXP seedSEXP, SEXP streamSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RCaN_fitCaN_try(NSEXP, ASEXP, bSEXP, CSEXP, vSEXP, LSEXP, x0SEXP, thinSEXP, seedSEXP, streamSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _RCaN_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Eigen::MatrixXd(*cpgs)(const int,const Eigen::MatrixXd&,const Eigen::VectorXd&,const Eigen::VectorXd&,const int,const bool,const int,const int)");
        signatures.insert("Eigen::MatrixXd(*cpgsEquality)(const int,const Eigen::MatrixXd&,const Eigen::VectorXd&,const Eigen::MatrixXd&,const Eigen::VectorXd&,const Eigen::VectorXd&,const int,const bool,const int,const int)");
        signatures.insert("List(*fitCaN)(const int,const Eigen::MatrixXd&,const Eigen::VectorXd&,const Eigen::MatrixXd&,const Eigen::VectorXd&,const Eigen::MatrixXd&,const Eigen::VectorXd&,const int,const int,const int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _RCaN_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RCaN", "_RCaN_cpgs", (DL_FUNC)_RCaN_cpgs_try);
    R_RegisterCCallable("RCaN", "_RCaN_cpgsEquality", (DL_FUNC)_RCaN_cpgsEquality_try);
    R_RegisterCCallable("RCaN", "_RCaN_fitCaN", (DL_FUNC)_RCaN_fitCaN_try);
    R_RegisterCCallable("RCaN", "_RCaN_RcppExport_validate", (DL_FUNC)_RCaN_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_RCaN_cpgs", (DL_FUNC) &_RCaN_cpgs, 8},
    {"_RCaN_cpgsEquality", (DL_FUNC) &_RCaN_cpgsEquality, 10},
    {"_RCaN_fitCaN", (DL_FUNC) &_RCaN_fitCaN, 10},
    {"_RCaN_RcppExport_registerCCallable", (DL_FUNC) &_RCaN_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RCaN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
