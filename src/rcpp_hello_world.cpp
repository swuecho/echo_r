#include <Rcpp.h>
#include <algorithm>
using namespace Rcpp;

// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}

#include <Rcpp.h>
// [[Rcpp::export]]
std::string reverse_str(std::string str ) {
    std::reverse(str.begin(), str.end());
    return str;
}
