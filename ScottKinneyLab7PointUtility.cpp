// FILE  Point Utility - Stand-alone function definitions
/**
 * Program name: ScottKinneyLab7PointUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include "ScottKinneyLab7PointUtility.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

void pointInit(PointScottK *&point) {

    cout << "x: ";
    FractionScottK *frX = NULL;
    fractionInit(frX);

    cout << "y: ";
    FractionScottK *frY = NULL;
    fractionInit(frY);

    point = new PointScottK(*frX, *frY);

    delete frX;
    delete frY;
}
