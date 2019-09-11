// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// getKappaC0zv
double getKappaC0zv(arma::mat X, arma::uvec t1, arma::uvec t2, arma::uvec t3);
RcppExport SEXP _gofar_getKappaC0zv(SEXP XSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP t3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t3(t3SEXP);
    rcpp_result_gen = Rcpp::wrap(getKappaC0zv(X, t1, t2, t3));
    return rcpp_result_gen;
END_RCPP
}
// familyLinkinv3
arma::mat familyLinkinv3(arma::mat X, arma::uvec t1, arma::uvec t2, arma::uvec t3);
RcppExport SEXP _gofar_familyLinkinv3(SEXP XSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP t3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t3(t3SEXP);
    rcpp_result_gen = Rcpp::wrap(familyLinkinv3(X, t1, t2, t3));
    return rcpp_result_gen;
END_RCPP
}
// absT
double absT(double Xm);
RcppExport SEXP _gofar_absT(SEXP XmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type Xm(XmSEXP);
    rcpp_result_gen = Rcpp::wrap(absT(Xm));
    return rcpp_result_gen;
END_RCPP
}
// nzcount
int nzcount(arma::vec x);
RcppExport SEXP _gofar_nzcount(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(nzcount(x));
    return rcpp_result_gen;
END_RCPP
}
// softThres
double softThres(double x, double lambda);
RcppExport SEXP _gofar_softThres(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(softThres(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// softT
arma::vec softT(arma::vec x, arma::vec lambda);
RcppExport SEXP _gofar_softT(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(softT(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// logisticlik
double logisticlik(arma::mat Y, arma::mat MU, arma::mat nind);
RcppExport SEXP _gofar_logisticlik(SEXP YSEXP, SEXP MUSEXP, SEXP nindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nind(nindSEXP);
    rcpp_result_gen = Rcpp::wrap(logisticlik(Y, MU, nind));
    return rcpp_result_gen;
END_RCPP
}
// gausslikehood
double gausslikehood(arma::mat Y, arma::mat MU, arma::vec Phi, arma::mat nind);
RcppExport SEXP _gofar_gausslikehood(SEXP YSEXP, SEXP MUSEXP, SEXP PhiSEXP, SEXP nindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nind(nindSEXP);
    rcpp_result_gen = Rcpp::wrap(gausslikehood(Y, MU, Phi, nind));
    return rcpp_result_gen;
END_RCPP
}
// poissonlik
double poissonlik(arma::mat Y, arma::mat MU, arma::mat nind);
RcppExport SEXP _gofar_poissonlik(SEXP YSEXP, SEXP MUSEXP, SEXP nindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nind(nindSEXP);
    rcpp_result_gen = Rcpp::wrap(poissonlik(Y, MU, nind));
    return rcpp_result_gen;
END_RCPP
}
// poissondev
double poissondev(arma::mat Y, arma::mat MU, arma::mat nind);
RcppExport SEXP _gofar_poissondev(SEXP YSEXP, SEXP MUSEXP, SEXP nindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nind(nindSEXP);
    rcpp_result_gen = Rcpp::wrap(poissondev(Y, MU, nind));
    return rcpp_result_gen;
END_RCPP
}
// objfun3
double objfun3(arma::mat Y, arma::mat MU, arma::vec Phi, arma::uvec t1, arma::uvec t2, arma::uvec t3, int msind, arma::mat naind);
RcppExport SEXP _gofar_objfun3(SEXP YSEXP, SEXP MUSEXP, SEXP PhiSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP t3SEXP, SEXP msindSEXP, SEXP naindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t3(t3SEXP);
    Rcpp::traits::input_parameter< int >::type msind(msindSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type naind(naindSEXP);
    rcpp_result_gen = Rcpp::wrap(objfun3(Y, MU, Phi, t1, t2, t3, msind, naind));
    return rcpp_result_gen;
END_RCPP
}
// getdeviance
double getdeviance(arma::mat Y, arma::mat MU, arma::vec Phi, arma::uvec t1, arma::uvec t2, arma::uvec t3, int msind, arma::mat naind);
RcppExport SEXP _gofar_getdeviance(SEXP YSEXP, SEXP MUSEXP, SEXP PhiSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP t3SEXP, SEXP msindSEXP, SEXP naindSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t3(t3SEXP);
    Rcpp::traits::input_parameter< int >::type msind(msindSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type naind(naindSEXP);
    rcpp_result_gen = Rcpp::wrap(getdeviance(Y, MU, Phi, t1, t2, t3, msind, naind));
    return rcpp_result_gen;
END_RCPP
}
// mySdiff
arma::uvec mySdiff(arma::uvec x, arma::uvec y);
RcppExport SEXP _gofar_mySdiff(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mySdiff(x, y));
    return rcpp_result_gen;
END_RCPP
}
// gcure_cpp_init2
Rcpp::List gcure_cpp_init2(arma::mat Y, arma::mat X0, int rnk, arma::vec cindex, arma::mat ofset, arma::vec familygroup, arma::mat Zini, arma::vec PhiIni, double kappaC0, Rcpp::List control, int msind, arma::mat naind, double ndev);
RcppExport SEXP _gofar_gcure_cpp_init2(SEXP YSEXP, SEXP X0SEXP, SEXP rnkSEXP, SEXP cindexSEXP, SEXP ofsetSEXP, SEXP familygroupSEXP, SEXP ZiniSEXP, SEXP PhiIniSEXP, SEXP kappaC0SEXP, SEXP controlSEXP, SEXP msindSEXP, SEXP naindSEXP, SEXP ndevSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< int >::type rnk(rnkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cindex(cindexSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ofset(ofsetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type familygroup(familygroupSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zini(ZiniSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type PhiIni(PhiIniSEXP);
    Rcpp::traits::input_parameter< double >::type kappaC0(kappaC0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< int >::type msind(msindSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type naind(naindSEXP);
    Rcpp::traits::input_parameter< double >::type ndev(ndevSEXP);
    rcpp_result_gen = Rcpp::wrap(gcure_cpp_init2(Y, X0, rnk, cindex, ofset, familygroup, Zini, PhiIni, kappaC0, control, msind, naind, ndev));
    return rcpp_result_gen;
END_RCPP
}
// gcure_cpp_miss
Rcpp::List gcure_cpp_miss(arma::mat Y, arma::mat Xm, int nlam, arma::vec cindex, arma::mat ofset, arma::vec familygroup, Rcpp::List initw, double Dini, arma::mat Zini, arma::vec PhiIni, arma::mat Uini, arma::vec Vini, double kappaC0, double lmax, Rcpp::List control, int msind, arma::mat naind, double ndev, int eea, Rcpp::List zerosol, int maxit, double epsilon);
RcppExport SEXP _gofar_gcure_cpp_miss(SEXP YSEXP, SEXP XmSEXP, SEXP nlamSEXP, SEXP cindexSEXP, SEXP ofsetSEXP, SEXP familygroupSEXP, SEXP initwSEXP, SEXP DiniSEXP, SEXP ZiniSEXP, SEXP PhiIniSEXP, SEXP UiniSEXP, SEXP ViniSEXP, SEXP kappaC0SEXP, SEXP lmaxSEXP, SEXP controlSEXP, SEXP msindSEXP, SEXP naindSEXP, SEXP ndevSEXP, SEXP eeaSEXP, SEXP zerosolSEXP, SEXP maxitSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xm(XmSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cindex(cindexSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ofset(ofsetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type familygroup(familygroupSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type initw(initwSEXP);
    Rcpp::traits::input_parameter< double >::type Dini(DiniSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zini(ZiniSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type PhiIni(PhiIniSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Uini(UiniSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Vini(ViniSEXP);
    Rcpp::traits::input_parameter< double >::type kappaC0(kappaC0SEXP);
    Rcpp::traits::input_parameter< double >::type lmax(lmaxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< int >::type msind(msindSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type naind(naindSEXP);
    Rcpp::traits::input_parameter< double >::type ndev(ndevSEXP);
    Rcpp::traits::input_parameter< int >::type eea(eeaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type zerosol(zerosolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(gcure_cpp_miss(Y, Xm, nlam, cindex, ofset, familygroup, initw, Dini, Zini, PhiIni, Uini, Vini, kappaC0, lmax, control, msind, naind, ndev, eea, zerosol, maxit, epsilon));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gofar_getKappaC0zv", (DL_FUNC) &_gofar_getKappaC0zv, 4},
    {"_gofar_familyLinkinv3", (DL_FUNC) &_gofar_familyLinkinv3, 4},
    {"_gofar_absT", (DL_FUNC) &_gofar_absT, 1},
    {"_gofar_nzcount", (DL_FUNC) &_gofar_nzcount, 1},
    {"_gofar_softThres", (DL_FUNC) &_gofar_softThres, 2},
    {"_gofar_softT", (DL_FUNC) &_gofar_softT, 2},
    {"_gofar_logisticlik", (DL_FUNC) &_gofar_logisticlik, 3},
    {"_gofar_gausslikehood", (DL_FUNC) &_gofar_gausslikehood, 4},
    {"_gofar_poissonlik", (DL_FUNC) &_gofar_poissonlik, 3},
    {"_gofar_poissondev", (DL_FUNC) &_gofar_poissondev, 3},
    {"_gofar_objfun3", (DL_FUNC) &_gofar_objfun3, 8},
    {"_gofar_getdeviance", (DL_FUNC) &_gofar_getdeviance, 8},
    {"_gofar_mySdiff", (DL_FUNC) &_gofar_mySdiff, 2},
    {"_gofar_gcure_cpp_init2", (DL_FUNC) &_gofar_gcure_cpp_init2, 13},
    {"_gofar_gcure_cpp_miss", (DL_FUNC) &_gofar_gcure_cpp_miss, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_gofar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
