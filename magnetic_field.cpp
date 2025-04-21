#include "Magnetic_Field.h"
#define MU_0 1.257e-6



Magnetic_Field::Magnetic_Field(): Field(), calculation_of_B(0.0) {}
Magnetic_Field::Magnetic_Field(double x, double y, double z): Field(x,y,z), calculation_of_B(0.0) {} 
Magnetic_Field::Magnetic_Field(const Magnetic_Field& other): Field(other), calculation_of_B(other.calculation_of_B) {} 

void Magnetic_Field::calculateMagneticField(double I, double r) {
	calculation_of_B = I / (2 * PI *r * MU_0);
	std::cout<< "Calculation of Magnetic Field: " << calculation_of_B<< std::endl;
}


Magnetic_Field operator+(const Magnetic_Field& m1, const Magnetic_Field& m2) {
	return Magnetic_Field (
		m1.value[0] + m2.value[0],
		m1.value[1] + m2.value[1],
		m1.value[2] + m2.value[2]
	);
}


std::ostream& operator<<(std::ostream& os, const Magnetic_Field& m) {
	os<<"Magnetic Field: \n" <<m.value[0]<<", " <<m.value[1]<<", "
		<<m.value[2]<<endl;
	
	return os;
}



