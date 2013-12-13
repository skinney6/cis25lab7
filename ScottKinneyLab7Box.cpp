// FILE Box Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Box.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7Box.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Rectangle.h"

FractionScottK const six(6, 1);

void BoxScottK::print(ostream &os) {
    os << "Box:\nArea " << BoxScottK::getArea()
       << " Vol " << BoxScottK::getVol() << endl;
}

FractionScottK BoxScottK::getHeight(void) const {
    return height;
}

// multiply the rectangle area times 6 sides
FractionScottK BoxScottK::getArea(void) const {
    return FractionScottK((RectangleScottK::getArea()) * six);
}

FractionScottK BoxScottK::getVol(void) const {
    return FractionScottK((RectangleScottK::getArea()) * height);
}

BoxScottK& BoxScottK::operator=(const BoxScottK &arg) {
    if (this != &arg) {  // no self-assignemnet
	height = arg.height;
    }
    return *this;
}

BoxScottK::BoxScottK() {
}

BoxScottK::~BoxScottK() {
    //delete this;
}

BoxScottK::BoxScottK(PointScottK &ll, PointScottK &ur, FractionScottK &h) 
    : RectangleScottK(ll, ur) {
    if (height >= 0)
	height = h;
    else
	height = 0;
}

BoxScottK::BoxScottK(RectangleScottK &rect, FractionScottK &h) 
    : RectangleScottK(rect) {
    if (height >= 0)
	height = h;
    else
	height = 0;
}

void 
BoxScottK::update(PointScottK &ll, PointScottK & ur, FractionScottK &h) {
    RectangleScottK::update(ll, ur);
    if (height >= 0)
	height = h;
    else
	height = 0;
}

