// FILE Circle Utility (Stand-alone function definitions)
/**
 * Program name: ScottKinneyLab7CircleUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7CircleUtility.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7PointUtility.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

void circleInit(CircleScottK *&cir) {
    PointScottK *center = NULL;
    FractionScottK *radius = NULL;

    pointInit(center);
    cout << "Radius: ";
    fractionInit(radius);

    while (*radius < 0) {
	cout << "Radius cannot be less than zero\nRadius: ";
	fractionInit(radius);
    }
	
    if (cir)
	cir->update(*center, *radius);
    else
	cir = new CircleScottK(*center, *radius);	    

    delete center;
    delete radius;
}
