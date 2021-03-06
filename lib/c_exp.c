#include <config.h>
#include "f2c.h"

#undef abs
#include <math.h>

void c_exp(complex *r, complex *z)
{
	double expx, zi = z->i;

	expx = exp(z->r);
	r->r = expx * cos(zi);
	r->i = expx * sin(zi);
}
