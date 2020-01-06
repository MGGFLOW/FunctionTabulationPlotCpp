#pragma once
#include "stdafx.h"
#include "Function.h"

using System::Drawing::PointF;

// основной класс, решающий поставленную задачу
ref class Solver : public Function {
private:
	System::Drawing::Graphics ^drawer; // устройство рисования
	System::Collections::Generic::List<PointF> ^calcPoints(); // пеерменная для хранения точек графика
	int scale; //  длина единичного отрезка (масштаб)
	double step; // шаг табулирования
	int width = 1; // ширина изображения
	int height = 1; // высота изображения
	int type; // тип функции (исходная, производная, первообразная)
	int ox; // координата начала координат
	int oy; // координата начала координат
	double startx; // начало интервала
	double endx; // конец интервала
	double starty; // начало интервала значений функции
	double endy; // конец интервала значений функции

	void drawnGrid(); // рисует сетку
	void calcOx(); // считает абсциссу начала координат
	void calcOy(); // считает ординату начала координат
	void calcOxis(); // считает координаты начала координат
	void drawOxis(); // рисует оси
	void setOxis(); // задаёт начало координат для устройства рисования
	void drawPlot(); // рисует график
	
public:
	void setInterval(double,double); // устанавливает границы интервала
	void setWidth(int); // устанавливает ширину изображения
	void setHeight(int); // устанавливает высоту изображения
	void setStep(double); // устанавливает занчение шага
	void setScale(int); // устанавливает значение масштаба
	void setType(int); // устанавливает тип графика
	bool checkInterval(); // проверяет заданный интервал
	System::Drawing::Bitmap ^getPlotImage(); // метод, возвращающий результирующее изображение
	~Solver(); // деструктор очищает память устройства рисования
};