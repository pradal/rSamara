// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "rsamara_types.hpp"
#include <Rcpp.h>

using namespace Rcpp;

// toJulianDayCalcC
double toJulianDayCalcC(Rcpp::String date, Rcpp::String format, Rcpp::String sep);
RcppExport SEXP rsamara_toJulianDayCalcC(SEXP dateSEXP, SEXP formatSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type date(dateSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(toJulianDayCalcC(date, format, sep));
    return rcpp_result_gen;
END_RCPP
}
// toJulianDayCalc
double toJulianDayCalc(Rcpp::String date);
RcppExport SEXP rsamara_toJulianDayCalc(SEXP dateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type date(dateSEXP);
    rcpp_result_gen = Rcpp::wrap(toJulianDayCalc(date));
    return rcpp_result_gen;
END_RCPP
}
// run2DF
List run2DF(List params, List meteo);
RcppExport SEXP rsamara_run2DF(SEXP paramsSEXP, SEXP meteoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< List >::type meteo(meteoSEXP);
    rcpp_result_gen = Rcpp::wrap(run2DF(params, meteo));
    return rcpp_result_gen;
END_RCPP
}
// runDF
List runDF(Rcpp::String from_date, Rcpp::String to_date, List simulation, List variety, List plot, List itinerary, List station, List meteo);
RcppExport SEXP rsamara_runDF(SEXP from_dateSEXP, SEXP to_dateSEXP, SEXP simulationSEXP, SEXP varietySEXP, SEXP plotSEXP, SEXP itinerarySEXP, SEXP stationSEXP, SEXP meteoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type from_date(from_dateSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type to_date(to_dateSEXP);
    Rcpp::traits::input_parameter< List >::type simulation(simulationSEXP);
    Rcpp::traits::input_parameter< List >::type variety(varietySEXP);
    Rcpp::traits::input_parameter< List >::type plot(plotSEXP);
    Rcpp::traits::input_parameter< List >::type itinerary(itinerarySEXP);
    Rcpp::traits::input_parameter< List >::type station(stationSEXP);
    Rcpp::traits::input_parameter< List >::type meteo(meteoSEXP);
    rcpp_result_gen = Rcpp::wrap(runDF(from_date, to_date, simulation, variety, plot, itinerary, station, meteo));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_reduceVobs
List rcpp_reduceVobs(List vObs, List results);
RcppExport SEXP rsamara_rcpp_reduceVobs(SEXP vObsSEXP, SEXP resultsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vObs(vObsSEXP);
    Rcpp::traits::input_parameter< List >::type results(resultsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_reduceVobs(vObs, results));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_reduceResults
List rcpp_reduceResults(List results, List vobs);
RcppExport SEXP rsamara_rcpp_reduceResults(SEXP resultsSEXP, SEXP vobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type results(resultsSEXP);
    Rcpp::traits::input_parameter< List >::type vobs(vobsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_reduceResults(results, vobs));
    return rcpp_result_gen;
END_RCPP
}
