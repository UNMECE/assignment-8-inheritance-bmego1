#ifndef FIELD_H
#define FIELD_H
#include <iostream>
#include <cmath>


class Field {

	protected:
		double* value;

	public:
		Field();
		Field(double x, double y, double z);
		Field(const Field& other);
		virtual ~Field();

		virtual void printMagnitude() const;
};


#endif


