#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

double degreemath::sin(double degree) {
	double halfC = M_PI / 180;
	return std::sin(degree*halfC);
}

double degreemath::cos(double degree) {
	double halfC = M_PI / 180;
	return std::cos(degree*halfC);
}

double degreemath::tg(double degree) {
	double halfC = M_PI / 180;
	return std::tan(degree*halfC);
}

double degreemath::ctg(double degree) {
	double halfC = M_PI / 180;
	return 1/std::tan(degree*halfC);
}