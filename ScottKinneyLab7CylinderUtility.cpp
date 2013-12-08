// FILE Cylinder Utility (Stand-alone function definitions)
/**
 * Program name: ScottKinneyLab7CylinderUtility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7CylinderUtility.h"
#include "ScottKinneyLab7Cylinder.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7CircleUtility.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7PointUtility.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7FractionUtility.h"

FractionScottK compareCylinderVol(CylinderScottK &c1, CylinderScottK &c2) {
    return FractionScottK(c1.getR() - c2.getR());
}

FractionScottK compareCylinderArea(CylinderScottK &c1, CylinderScottK &c2) {
    return FractionScottK(c1.getR() - c2.getR());
}

void cylinderInit(CylinderScottK *&cyl) {
    PointScottK *center = NULL;
    FractionScottK *radius = NULL;
    FractionScottK *height = NULL;

    pointInit(center);
    cout << "Radius: ";
    fractionInit(radius);
    while (*radius < 0) {
	cout << "Radius cannot be less than zero\nRadius: ";
	fractionInit(radius);
    }

    cout << "Heigth: ";
    fractionInit(height);
    while (*height < 0) {
	cout << "Height cannot be less than zero\nHeight: ";
	fractionInit(height);
    }
	
    if (cyl)
	cyl->update(*center, *radius, *height);
    else
	cyl = new CylinderScottK(*center, *radius, *height);	    

    delete center;
    delete radius;
    delete height;
}
