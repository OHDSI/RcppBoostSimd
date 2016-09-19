#include <Rcpp.h>

#include <boost/simd/pack.hpp>
#include <boost/simd/function/sum.hpp>

// [[Rcpp::export]]
double test_boost_simd() {
  boost::simd::pack<float, 4> p{1.f, 2.f, 3.f, 4.f};
  p = p + 10 * p;
  auto sum = boost::simd::sum(p);
  return static_cast<double>(sum);
}
