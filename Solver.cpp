#include "stdafx.h"
#include "Solver.h"

Solver::~Solver() {
	delete this->drawer;
}

void Solver::setWidth(int w) {
	this->width = w;
}

void Solver::setHeight(int h) {
	this->height = h;
}

void Solver::setStep(double s) {
	this->step = s;
}

void Solver::setScale(int sc) {
	this->scale = sc;
}

void Solver::setType(int t) {
	this->type = t;
}

bool Solver::checkInterval() {
	for (double x = this->startx; x <= this->endx; x += this->step) {
		if (!this->checkOOP(x)) return false;
	}

	return true;
}

void Solver::drawnGrid() {
	for (int i = this->ox; i < this->width; i += scale)
		this->drawer->DrawLine(System::Drawing::Pens::Blue, i, 0, i, height);
	for (int i = this->ox; i > 0; i -= scale)
		this->drawer->DrawLine(System::Drawing::Pens::Blue, i, 0, i, height);

	for (int i = this->oy; i < this->height; i += scale)
		this->drawer->DrawLine(System::Drawing::Pens::Blue, 0, i, width, i);
	for (int i = this->oy; i > 0; i -= scale)
		this->drawer->DrawLine(System::Drawing::Pens::Blue, 0, i, width, i);
}

void Solver::calcOx() {
	double maxox, minox, lxs, lxe;

	maxox = System::Math::Truncate(this->width / this->scale)*this->scale - this->scale;
	minox = this->scale;
	lxs = System::Math::Abs(this->startx * this->scale);
	lxe = System::Math::Abs(this->endx * this->scale);

	if (this->startx <= 0 && this->endx > 0) {
		if ((lxs + lxe) < this->width) {
			this->ox = (this->width - lxs - lxe) / 2 + lxe;
		}
		else {
			this->ox = this->width*lxe / (lxs + lxe);
		}
	}
	else if (this->startx < 0 && this->endx <= 0) {
		this->ox = maxox;
	}
	else if (this->startx >= 0 && this->endx > 0) {
		this->ox = minox;
	}

	if (this->ox > maxox) {
		this->ox = maxox;
	}
	else if (this->ox < minox) {
		this->ox = minox;
	}
}

void Solver::calcOy() {
	double maxoy, minoy,lys,lye;

	maxoy = System::Math::Truncate(this->height / this->scale)*this->scale-this->scale;
	minoy = this->scale;
	lys = System::Math::Abs(this->starty * this->scale);
	lye = System::Math::Abs(this->endy * this->scale);

	if (this->starty <= 0 && this->endy > 0) {
		if ((lys + lye) < this->height) {
			this->oy = (this->height - lys - lye) / 2 + lye;
		}else {
			this->oy = this->height*lye / (lys + lye);
		}
	}else if (this->starty < 0 && this->endy <= 0) {
		this->oy = minoy;
	}else if (this->starty >= 0 && this->endy > 0) {
		this->oy = maxoy;
	}

	if (this->oy > maxoy) {
		this->oy = maxoy;
	}
	else if (this->oy < minoy) {
		this->oy = minoy;
	}
}

void Solver::calcOxis() {
	this->calcOx();
	this->calcOy();
}

void Solver::drawOxis() {
	this->drawer->DrawLine(System::Drawing::Pens::Red, this->ox, 0, ox, this->height);
	this->drawer->DrawLine(System::Drawing::Pens::Red, 0, this->oy, this->width, this->oy);
}

void Solver::setOxis() {
	this->drawer->ScaleTransform(1, -1);
	this->drawer->TranslateTransform((float)this->ox, -(float)this->oy);
}

void Solver::setInterval(double start,double end) {
	this->startx = start;
	this->endx = end;
}

System::Collections::Generic::List<PointF> ^Solver::calcPoints() {
	double y;
	System::Collections::Generic::List<PointF> ^points = gcnew System::Collections::Generic::List<PointF>();

	for (double x = this->startx; x <= this->endx; x += this->step) {
		switch (this->type) {
		case 1:
			y = this->diff(x);
			break;
		case 2:
			y = this->integral(x);
			break;
		default:
			y = this->func(x);
			break;
		}
		if (x == this->startx) {
			this->starty = y;
			this->endy = y;
		}else {
			if (y < this->starty) this->starty = y;
			if (y > this->endy) this->endy = y;
		}
		points->Add(PointF((float)(x*this->scale), (float)(y*this->scale)));
	}

	return points;

}

void Solver::drawPlot() {
	System::Collections::Generic::List<PointF> ^points;
	System::Drawing::Pen ^pen = gcnew System::Drawing::Pen(System::Drawing::Brushes::Green);
	pen->Width = 2;

	points = this->calcPoints();
	this->calcOxis();
	this->drawnGrid();
	this->drawOxis();
	this->setOxis();
	

	drawer->DrawLines(pen, points->ToArray());
	delete pen;
	delete points;
}

System::Drawing::Bitmap ^Solver::getPlotImage() {
	System::Drawing::Bitmap ^img = gcnew System::Drawing::Bitmap(this->width,this->height);
	this->drawer = System::Drawing::Graphics::FromImage(img);
	this->drawer->Clear(System::Drawing::Color::White);
	
	this->drawPlot();

	return img;
}