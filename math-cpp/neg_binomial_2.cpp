#include <emscripten/bind.h>
#include <stan/math/prim.hpp>

#include <cmath>

using namespace emscripten;

double neg_binomial_2_lpmf(int n, double mu, double phi) {
    return stan::math::neg_binomial_2_lpmf(n, mu, phi);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("neg_binomial_2_lpmf", &neg_binomial_2_lpmf);
}