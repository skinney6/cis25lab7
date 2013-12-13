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
#include "ScottKinneyLab7Shape.h"

BoxScottK*& boxInit(BoxScottK *&box) {
    PointScottK *ptLl;
    PointScottK *ptUr;
    FractionScottK *height = NULL;

    cout << "Lower left point\n";
    pointInit(ptLl);
    cout << "Upper right point\n";    
    pointInit(ptUr);
    
    if (*ptUr < *ptLl) {
	cout << "Upper right must be greater than lower left point\n";    
	cout << "Upper right point\n";
	pointInit(ptUr);
    }

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
    
    return (box);
}
