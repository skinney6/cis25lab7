// FILE Point Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Point.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"
using namespace std;

bool PointScottK::operator==(const PointScottK &arg) const {
    if (x == arg.x && y == arg.y)
	return true;
    else 
	return false;
}
bool PointScottK::operator!=(const PointScottK &arg) const {
    return !(*this == arg);
}

bool PointScottK::operator<(const PointScottK &arg) const {
    if ((*this != arg) && (arg.x > x || arg.y > y))
	return true;
    else 
	return false;
}

bool PointScottK::operator>(const PointScottK &arg) const {
    if (*this != arg)
	return !(*this < arg);
    else 
	return false;
}

bool PointScottK::operator<=(const PointScottK &arg) const {
    if (*this < arg || *this == arg)
	return true;
    else 
	return false;
}

bool PointScottK::operator>=(const PointScottK &arg) const {
    if (*this == arg || *this > arg)
	return true;
    else 
	return false;
}

void PointScottK::flipByX(void) {
    x = -x;
}

void PointScottK::flipByY(void) {
    y = -y;
}

void PointScottK::flipThroughOrigin(void) {
    x = -x;
    y = -y;
}

void PointScottK::moveBy(const FractionScottK &delX, 
			 const FractionScottK &delY) {
    x += delX;
    y += delY;
}

void PointScottK::moveBy(int n) {
    x += FractionScottK(n);
    y += FractionScottK(n);
}

FractionScottK PointScottK::getX(void) {
    return x;
}

FractionScottK PointScottK::getY(void) {
    return y;
}

ostream& operator<<(ostream &os, const PointScottK &point) {
    os << "\(" << point.x << ", " << point.y << ")";
    return os;
}

istream& operator>>(istream &is, PointScottK &point) {
    is >> point.x >> point.y;
    return is;
}

PointScottK::PointScottK() {
    // default constructor
}

PointScottK::PointScottK(FractionScottK &x, FractionScottK &y) 
    : x(x), y(y) {
}

PointScottK::PointScottK(const PointScottK &old) {
    //copy constructor
    x = old.x;
    y = old.y;
}

PointScottK::~PointScottK() {
}                 

PointScottK& PointScottK::operator=(const PointScottK &arg) {
    if (this != &arg) {  // no self-assignemnet
	x = arg.x;
	y = arg.y;
    }
    return *this;
}

void PointScottK::update(FractionScottK &argX, FractionScottK &argY) {
    x = argX;
    y = argY;
}
