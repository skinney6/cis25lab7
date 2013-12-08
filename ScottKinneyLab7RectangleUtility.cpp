// FILE Rectangle Utility (Stand-alone function definitions)
/*
 * Program name: ScottKinneyLab7PointUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7RectangleUtility.h"
#include "ScottKinneyLab7Rectangle.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7PointUtility.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

void rectangleInit(RectangleScottK *&rec) {
    PointScottK *ptLl;
    PointScottK *ptUr;

    pointInit(ptLl);
    pointInit(ptUr);

    if (rec)
	rec->update(*ptLl, *ptUr);
    else
	rec = new RectangleScottK(*ptLl, *ptUr);	    

    delete ptLl;
    delete ptUr;
}


