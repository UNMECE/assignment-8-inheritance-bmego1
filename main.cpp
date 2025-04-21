#include <iostream>
#include "field.h"
#include "magnetic_field.h"
#include "electric_field.h"


int main() {

	Electric_Field e1(0, 1e5, 1e3);
	Electric_Field e2(100, 200, 300);
	Magnetic_Field m1(5e-3, 0, 0);
	Magnetic_Field m2(2e-3, 3e-3, 1e-3);


	std::cout<< "\nElectric Fields: \n";
		e1.printMagnitude();
		e2.printMagnitude();


	std::cout<< "\nMagnetic Fields: \n";
		e1.printMagnitude();
		e2.printMagnitude();


	std::cout<< "\n Electric and Magnetic Field Caculations \n";
		e1.calculateElectricField(10,0.08); 
		m2.calculateMagneticField(5,0.1);


std::cout<< "\n Overload Operation \n";
	Electric_Field e3 = e2 + e1;
		std::cout<<e3 <<std::endl;
	Magnetic_Field m3 = m2 + m1;
		std::cout<< m3 <<std::endl;


	return 0;
}




