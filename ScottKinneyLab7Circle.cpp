// FILE Circle Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Circle.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Shape.h"

FractionScottK const PI(157/50);

void CircleScottK::print(ostream &os) {
    os << "Circle:\nCenter: " << center << " Radius: " << radius <<
	" Area: " << getArea() << endl;
}

FractionScottK CircleScottK::getR(void) const {
    return radius;
}

FractionScottK CircleScottK::getArea(void) const {
    return FractionScottK(PI * (radius * radius));
}

FractionScottK CircleScottK::getVol(void) const {
    return 0;
}

ostream& operator<<(ostream &os, CircleScottK &circle) {
    circle.print(os);
    return os;
}

istream& operator>>(istream &is, CircleScottK &circle) {
    is >> circle.center >> circle.radius;
    return is;
}

CircleScottK::CircleScottK() {
    // default constructor
}
CircleScottK::CircleScottK(PointScottK &c, FractionScottK &r) 
    : center(c), radius(r) {
}

CircleScottK::CircleScottK(const CircleScottK &old) {
    //copy constructor
    center = old.center;
    radius = old.radius;
}

CircleScottK::~CircleScottK() {
}                 

CircleScottK& CircleScottK::operator=(const CircleScottK &arg) {
    center = arg.center;
    radius = arg.radius;
    return *this;
}

void CircleScottK::update(PointScottK &c, FractionScottK &r) {
    center = c;
    radius = r;
}
