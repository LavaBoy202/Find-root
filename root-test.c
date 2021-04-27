#include <assert.h>
#include "root.h"

// decreasing_poly_with_root_sqrt2(x) calculates -(x^2) + 2
double decreasing_poly_with_root_sqrt2(double x) {
  return - (x * x) + 2;
}

int main(void) {
  double root = bisection(decreasing_poly_with_root_sqrt2, 1, 2, 0.0001);
  assert(root >= 1.414 && root <= 1.415);
}
