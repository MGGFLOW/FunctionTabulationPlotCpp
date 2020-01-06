#pragma once
#include "stdafx.h"

// класс, задающий описание исходной функции, производной функции, первообразной и метода проверки области определения
ref class Function {
public:
	bool checkOOP(double x); // проверка вхождения интервала в область определения
protected:
	double func(double x); // метод, описывающий исходную функцию
	double diff(double x); // метод, описывающий производную функцию
	double integral(double x); // метод, описывающий первообразную
};