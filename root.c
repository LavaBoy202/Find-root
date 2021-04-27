//A4Q1
#include "root.h"
#include <assert.h>

double bisection(double (*f)(double), double lo, double hi, double tolerance) {
  assert (tolerance > 0);
  assert (f);
  assert (lo < hi);
  assert (f(hi) != 0);
  assert (f(lo) != 0);
  if (f(lo) > 0) {
    assert(f(hi) < 0);
  }
  if (f(lo) < 0) {
    assert (f(hi) > 0);
  }
  double midpoint = ((lo + hi) / 2);
  while ((f(midpoint) < (tolerance * -1)) || (f(midpoint) > tolerance)) {
    if ((f(midpoint) > 0) && (f(lo) > 0)) {
      lo = midpoint;
    }
    else if ((f(midpoint) < 0) && (f(lo) < 0)) {
      lo = midpoint;
    }
    else if (((f(midpoint) > 0) && (f(hi) > 0)) ||
             ((f(midpoint) < 0) && (f(hi) < 0))) {
      hi = midpoint;
    }
    midpoint = ((lo + hi) / 2);
  }
  return midpoint;
}
