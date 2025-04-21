#include "electric_field.h"
#define EPSILON_0 8.854e-12
#define PI 3.1416



Electric_Field::Electric_Field(): Field(), calc_electr(0.0) {}
Electric_Field::Electric_Field(double x, double y, double z): Field(x,y,z), calc_electr(0.0) {}
Electric_Field:: Electric_Field (const Electric_Field&other): Field(other), calc_electr(other.calc_electr) {}

void Electric_Field::calculateElectricField(double Q, double r) {
	calc_electr = Q / (4 * PI * r * r * EPSILON_0);
	std::cout<<"Calculation of Electric Field: " <<calc_electr <<std::endl;
}

Electric_Field operator+(const Electric_Field& e1, const Electric_Field& e2) {
	return Electric_Field (
		e1.value[0] + e2.value[0],
		e1.value[1] + e2.value[1],
		e1.value[2] + e2.value[2]
	);

}


std::ostream& operator<< (std::ostream& os, const Electric_Field& e) {
	os<< "Electrical Field: \n" << e.value[0] << ", " <<e.value[1] << ", "
		<<e.value[2] <<std::endl;
		
		return os;
}





