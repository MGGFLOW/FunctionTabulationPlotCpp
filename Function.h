#pragma once
#include "stdafx.h"

// �����, �������� �������� �������� �������, ����������� �������, ������������� � ������ �������� ������� �����������
ref class Function {
public:
	bool checkOOP(double x); // �������� ��������� ��������� � ������� �����������
protected:
	double func(double x); // �����, ����������� �������� �������
	double diff(double x); // �����, ����������� ����������� �������
	double integral(double x); // �����, ����������� �������������
};