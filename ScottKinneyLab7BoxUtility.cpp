// FILE Box Utility (Stand-alone function definitions)
/**
 * Program name: ScottKinneyLab7BoxUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7BoxUtility.h"
#include "ScottKinneyLab7Box.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7PointUtility.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

//extern FractionScottK fraZero;

void boxInit(BoxScottK *&box) {
    PointScottK *ptLl;
    PointScottK *ptUr;
    FractionScottK *height = NULL;

    pointInit(ptLl);
    pointInit(ptUr);

    cout << "Heigth: ";
    fractionInit(height);
    while (*height < 0) {
	cout << "Height cannot be less than zero\nHeight: ";
	fractionInit(height);
    }

    if (box) {
	box->update(*ptLl, *ptUr, *height);
    } else {
	box =  new BoxScottK(*ptLl, *ptUr, *height);
    }
    delete ptLl;
    delete ptUr;
    delete height;
}
