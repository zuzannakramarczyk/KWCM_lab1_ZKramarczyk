#include "trygonometria.h"
#include <iostream>

int main() 
{ 
	double stopnie=90;
	double sin = degreemath::sin(stopnie);
	double cos = degreemath::cos(stopnie);
	double tg = degreemath::tg(stopnie);
	double ctg = degreemath::ctg(stopnie);

	std::cout << "Sinus = ";
	std::cout << sin << std::endl;

	std::cout << "Cosinus = ";
	std::cout << cos << std::endl;

	std::cout << "Tangens = ";
	std::cout << tg << std::endl;

	std::cout << "Cotangens = ";
	std::cout << ctg << std::endl;

}