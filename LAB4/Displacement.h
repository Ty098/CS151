//Team: Burger
//Author: Tyrick Turney
//Creation: <Date>
#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H
#include <stdio.h>
#include <math.h>

#include "Archive.h"

double displacement(double v,double t,double a)
{

	return (v*cos(toRad(a)) * t);
}

#endif 