//Team: Burger
//Author: Chrischael jean-louis, Johnathan Le, Tyrick Turney
//Creation: <Date>
#ifndef STATS_H
#define STATS_H

#include "Archive.h"

std::string stats(double v,double t,double a)
{
	std::stringstream str;
	str << std::left << std::fixed << std::setprecision(2);
	str << std::setw(20) << t;
	str << std::setw(20) <<	velocity(v,t,a);
	str << std::setw(20) <<	height(v,t,a);
	str << std::setw(20) << displacement(v,t,a) << "\n";
	
	return str.str();
}

#endif 