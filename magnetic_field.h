#include "field.h"
#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H


class Magnetic_Field: public Field {

	private:
		double calc_mag;
	
	public:
		Magnetic_Field();
		Magnetic_Field(double x, double y, double z);
		Magnetic_Field(const Magnetic_Field& other);
		void calculateMagneticField(double I, double r);
		friend Magnetic_Field operator+(const Magnetic_Field& m1, const Magnetic_Field& m2);
		friend std::ostream& operator<<(std::ostream& os, const Magnetic_Field& m);

};

#endif


