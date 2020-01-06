#include "stdafx.h"
#include "Function.h"

bool Function::checkOOP(double x) {
	return x > 0;
}

double Function::func(double x) {
	double y;

	y = (2 * x * System::Math::Log(x, System::Math::E) + System::Math::Pow(x,2))/ System::Math::Pow(x, 2);

	return y;
}

double Function::diff(double x) {
	double diffy;

	diffy = (2 - 2 * System::Math::Log(x, System::Math::E)) / System::Math::Pow(x, 2);

	return diffy;
}

double Function::integral(double x) {
	double integraly;

	integraly = x + System::Math::Pow(System::Math::Log(x, System::Math::E), 2);

	return integraly;
}

