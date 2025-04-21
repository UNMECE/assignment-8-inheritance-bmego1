#include "field.h"



Field::Field() {
	value = new double[3] {0.0,0.0,0.0};
}

Field::Field(double x, double y, double z) {
	value = new double[3] {x,y,z};
}

Field::Field(const Field& other) {
	value = new double[3];
	for(int i=0; i<3; ++i)
		value[i] = other.value[i];
}

Field::~Field() {
	delete[] value;
}

void Field::printMagnitude() const {
	 std::cout<< "Components: ("
	 			<<value[0]<< ", "
				<<value[1]<< ", "
				<<value[2]<< ") "
				<<std::endl;
}



