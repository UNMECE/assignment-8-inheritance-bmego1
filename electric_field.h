#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H
#include "field.h"


class Electric_Field: public Field {

	private:
		double calc_electr;

	public:
		Electric_Field();
		Electric_Field(double x, double y, double z);
		Electric_Field(const Electric_Field& other);
		void calculateElectricField(double Q, double r);
		friend Electric_Field operator+(const Electric_Field& e1, const Electric_Field& e2);
		friend std::ostream& operator<<(std::ostream& os, const Electric_Field& e);
};

#endif

