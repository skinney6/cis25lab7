// FILE Rectangle Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Rectangle.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Rectangle.h"
using namespace std;

RectangleScottK& RectangleScottK::operator=(const RectangleScottK &arg) {
    if (this != &arg) {  // no self-assignemnet
	ll = arg.ll;
	ur = arg.ur;
    }
    return *this;
}

FractionScottK RectangleScottK::getAreaScottKinney(void) {
    return FractionScottK((ur.getX() - ll.getX()) * (ur.getY() - ll.getY()));
}

ostream& operator<<(ostream &os, const RectangleScottK &rect) {
    os << "Lower Left " << rect.ll << " Upper Right " << rect.ur;
    return os;
}

istream& operator>>(istream &is, RectangleScottK &rect) {
    is >> rect.ll >> rect.ur;
    return is;
}

RectangleScottK::RectangleScottK() {
}

RectangleScottK::RectangleScottK(PointScottK &arg1, PointScottK &arg2) {
    if (arg1 < arg2) {
	ll = arg1;
	ur = arg2;
    } else {
	ll = arg2;
	ur = arg1;
    }    
}

RectangleScottK::RectangleScottK(const RectangleScottK &arg) {
    ll = arg.ll;
    ur = arg.ur;
}

RectangleScottK::~RectangleScottK() {
}

void RectangleScottK::update(PointScottK &arg1, PointScottK &arg2) {
    if (arg1 < arg2) {
	ll = arg1;
	ur = arg2;
    } else {
	ll = arg2;
	ur = arg1;
    }
}
