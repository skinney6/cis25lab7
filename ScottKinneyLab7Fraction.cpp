// FILE Fraction Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab7Fraction.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         Tue Dec  3 09:05:01 PST 2013
 */
#include <iostream>
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"
using namespace std;

FractionScottK& FractionScottK::operator-() {
    num = -num;
    return *this;
}

FractionScottK& FractionScottK::operator+=(const FractionScottK &arg) {
    *this = *this + arg;
    return *this;
}

FractionScottK& FractionScottK::operator-=(const FractionScottK &arg) {
    *this = *this - arg;
    return *this;
}

bool FractionScottK::operator==(const FractionScottK &arg) const {
    if (num == arg.num && denom == arg.denom)
	return true;
    else 
	return false;
}
bool FractionScottK::operator!=(const FractionScottK &arg) const {
    return !(*this == arg);
}

bool FractionScottK::operator<(const FractionScottK &arg) const {
    if ((*this != arg) && (((num * arg.denom) - (denom * arg.num)) < 0))
	return true;
    else 
	return false;
}

bool FractionScottK::operator<=(const FractionScottK &arg) const {
    if (*this < arg || *this == arg)
	return true;
    else 
	return false;
}

bool FractionScottK::operator>=(const FractionScottK &arg) const {
    if (*this == arg || *this > arg)
	return true;
    else 
	return false;
}

bool FractionScottK::operator>(const FractionScottK &arg) const {
    if (*this != arg)
	return !(*this < arg);
    else 
	return false;
}

ostream& operator<<(ostream &os, const FractionScottK &fra) {
    os << fra.num << "/" << fra.denom;
    return os;
}

istream& operator>>(istream &is, FractionScottK &fra) {
    is >> fra.num >> fra.denom;
    return is;
}

FractionScottK::FractionScottK() {
    // default constructor
    num = 0;
    denom = 1;
}

FractionScottK::FractionScottK(int n, int d) {
    int negitiveFlag = 0;
    // make sure wed dont give denom neg value or zero
    if (d == 0) {
	num = n;
	denom = 1;
    } 
    if (d < 0) {
	denom = -d;
	num = -n;
    } 
    else {
	num = n;
	denom = d;
    }
    // check & change sign before we reduce
    if (num < 0) {
	negitiveFlag = 1;
	num = -num;
    }
    int gcf = gcd(num, denom);
    //reduce
    if (negitiveFlag == 1) {
	num = -(num / gcf);
	denom = (denom / gcf);
    } else { 
	num = (num / gcf);
	denom = (denom / gcf);
    }
}

void FractionScottK::update(int n, int d) {
    int negitiveFlag = 0;
    // make sure wed dont give denom neg value or zero
    if (d == 0) {
	num = n;
	denom = 1;
    } 
    if (d < 0) {
	denom = -d;
	num = -n;
    } 
    else {
	num = n;
	denom = d;
    }
    // check & change sign before we reduce
    if (num < 0) {
	negitiveFlag = 1;
	num = -num;
    }
    int gcf = gcd(num, denom);
    //reduce
    if (negitiveFlag == 1) {
	num = -(num / gcf);
	denom = (denom / gcf);
    } else { 
	num = (num / gcf);
	denom = (denom / gcf);
    }
}

FractionScottK::FractionScottK(const FractionScottK &frOld) {
    // copy constructor    
    num = frOld.num;
    denom = frOld.denom;
}

FractionScottK::FractionScottK(int n) {
    // convert constructor
    num = n;
    denom = 1; 
}

FractionScottK::~FractionScottK() {
    // destructor
}

int FractionScottK::getNum() const {
    return num;
}

int FractionScottK::getDenom() const {
    return denom;
}

void FractionScottK::setNum(int n) {
    num = n;
}

void FractionScottK::setDenom(int d) {
    if (d >= 0) {
	denom = d;
    } else {
	denom = 1;
	cout << "Cannot set the denominator to 0 or a negative value."
	     << "Setting denominator to 1.\n";
    }
}

FractionScottK FractionScottK::operator/(const FractionScottK &fr2) const {
    int n;
    int d;
    int gcf;

    n = num * fr2.getDenom();
    d = denom * fr2.getNum();

    // see if we need to reduce
    if ((gcf = gcd(n, d)) != 0) {
	d /= gcf;
	n /= gcf;
    } 
    return FractionScottK(n, d);
}

FractionScottK FractionScottK::operator*(const FractionScottK &fr2) const {
    int n;
    int d;
    int gcf;
    
    n = num * fr2.getNum();
    d = denom * fr2.getDenom();

    // see if we need to reduce
    if ((gcf = gcd(n, d)) != 0) {
	n /= gcf;
	d /= gcf;
    }
    
    return FractionScottK(n, d);
}

FractionScottK FractionScottK::operator-(const FractionScottK &fr2) const {
    return FractionScottK((num * fr2.denom) - (denom * fr2.num), 
   			  denom * fr2.denom);
}

FractionScottK FractionScottK::operator+(const FractionScottK &fr2) const {
    return FractionScottK((num * fr2.denom) + (denom * fr2.num), 
			  denom * fr2.denom);
}

FractionScottK& FractionScottK::operator=(const FractionScottK &fr2) {
    if (this != &fr2) { // no self-assignment
	num = fr2.num;
	denom = fr2.denom;
    }
    return *this;
}
