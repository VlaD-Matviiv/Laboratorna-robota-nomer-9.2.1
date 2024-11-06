#ifndef MATH_MACROS_H
#define MATH_MACROS_H

#include <cmath>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define POW(base, exp) (std::pow((base), (exp)))

#endif