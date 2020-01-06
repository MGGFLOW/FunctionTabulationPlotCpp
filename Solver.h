#pragma once
#include "stdafx.h"
#include "Function.h"

using System::Drawing::PointF;

// �������� �����, �������� ������������ ������
ref class Solver : public Function {
private:
	System::Drawing::Graphics ^drawer; // ���������� ���������
	System::Collections::Generic::List<PointF> ^calcPoints(); // ���������� ��� �������� ����� �������
	int scale; //  ����� ���������� ������� (�������)
	double step; // ��� �������������
	int width = 1; // ������ �����������
	int height = 1; // ������ �����������
	int type; // ��� ������� (��������, �����������, �������������)
	int ox; // ���������� ������ ���������
	int oy; // ���������� ������ ���������
	double startx; // ������ ���������
	double endx; // ����� ���������
	double starty; // ������ ��������� �������� �������
	double endy; // ����� ��������� �������� �������

	void drawnGrid(); // ������ �����
	void calcOx(); // ������� �������� ������ ���������
	void calcOy(); // ������� �������� ������ ���������
	void calcOxis(); // ������� ���������� ������ ���������
	void drawOxis(); // ������ ���
	void setOxis(); // ����� ������ ��������� ��� ���������� ���������
	void drawPlot(); // ������ ������
	
public:
	void setInterval(double,double); // ������������� ������� ���������
	void setWidth(int); // ������������� ������ �����������
	void setHeight(int); // ������������� ������ �����������
	void setStep(double); // ������������� �������� ����
	void setScale(int); // ������������� �������� ��������
	void setType(int); // ������������� ��� �������
	bool checkInterval(); // ��������� �������� ��������
	System::Drawing::Bitmap ^getPlotImage(); // �����, ������������ �������������� �����������
	~Solver(); // ���������� ������� ������ ���������� ���������
};