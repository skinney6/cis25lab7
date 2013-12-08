// FILE  Fraction Utility - Stand-alone function definitions
/**
 * Program name: ScottKinneyLab7FractionUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <string>
#include <sstream>
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

void fractionInit(FractionScottK *&frPt) {
    string input;
    string::size_type pos = 0;
    string::size_type len = 0;
    int n;
    int d;

    cin >> input;
    len = input.length();
    pos = input.find("/");

    if (pos != string::npos) {
	string nStr = input.substr(0, pos);
	if (!(stringstream(nStr) >> n))
	    n = 0;
	string dStr = input.substr((pos + 1), (len - pos));
	if (!(stringstream(dStr) >> d))
	    d = 1;
    } else {
	if (!(stringstream(input) >> n))
	    n = 0;
	d = 1;
    }
    frPt = new FractionScottK(n, d);
}

int gcd(int n, int d) {
    if (d == 0) 
	return n;
    else
	return gcd(d, n % d);
}

