#include <math.h>
#include <config.h>
#define F2C_NO_INLINE_H
#include <f2c.h>

double erf_(const real *x)
{
  return erf((double)*x);
}
