// FILE Cylinder Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Cylinder.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7Cylinder.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"

FractionScottK CylinderScottK::getArea(void) const {
    return FractionScottK((CircleScottK::getArea() * 2) * height);
}

FractionScottK CylinderScottK::getVol(void) const {
    return FractionScottK(CircleScottK::getArea() * height);
}

CylinderScottK::CylinderScottK() {
    // default constructor
}

CylinderScottK::CylinderScottK(PointScottK &center, 
			       FractionScottK &r, FractionScottK &h) 
    : CircleScottK(center, r) {
    if (height >= 0)
	height = h;
    else
	height = 0;
}

CylinderScottK::CylinderScottK(CircleScottK &base, FractionScottK &h) 
    : CircleScottK(base) {
   if (height >= 0)
	height = h;
    else
	height = 0;
}

CylinderScottK::~CylinderScottK() {
}                 

void CylinderScottK::update(PointScottK &c, 
		       FractionScottK &r, FractionScottK &h) {
    CircleScottK::update(c, r);
    if (height >= 0)
	height = h;
    else
	height = 0;
}

void CylinderScottK::print(ostream &os) {
    os << "Cylinder:\nBase Circle: Radius " << CircleScottK::getR() 
       << " Area " << CircleScottK::getArea() <<
	"\nCylinder Area: " << CylinderScottK::getArea() <<
	" Cylinder Volume: " << CylinderScottK::getVol() << endl;
}
