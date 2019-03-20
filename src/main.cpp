#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif

#include <iostream>

int main() 
{ 
	double kat=90;

	#ifdef USE_TRIGONOMETRY_DEGREE
	double sin = degreemath::sin(kat);
	double cos = degreemath::cos(kat);
	double tg = degreemath::tg(kat);
	double ctg = degreemath::ctg(kat);
	#else
	double sin = std::sin(kat);
	double cos = std::cos(kat);
	double tg = std::tan(kat);
	double ctg = 1/std::tan(kat);
	#endif


	std::cout << "Sinus = ";
	std::cout << sin << std::endl;

	std::cout << "Cosinus = ";
	std::cout << cos << std::endl;

	std::cout << "Tangens = ";
	std::cout << tg << std::endl;

	std::cout << "Cotangens = ";
	std::cout << ctg << std::endl;

}