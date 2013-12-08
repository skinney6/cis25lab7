// FILE Utility Header File
/**
 * Program name: ScottKinneyLab7Utility.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7UTILITY_H
#define SCOTTKINNEYLAB7UTILITY_H
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Rectangle.h"
#include "ScottKinneyLab7Box.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Cylinder.h"

void mainMenuScottKinney(void);
void menuCompAreaScottKinney(RectangleScottK *&, RectangleScottK *&, 
			     BoxScottK *&, BoxScottK *&, CircleScottK *&, 
			     CircleScottK *&, CylinderScottK *&, 
			     CylinderScottK *&);

void menuPrintAllInitScottKinney(RectangleScottK *&, RectangleScottK *&, 
				 BoxScottK *&, BoxScottK *&, CircleScottK *&, 
				 CircleScottK *&, CylinderScottK *&, 
				 CylinderScottK *&);
void menuPrintScottKinney(RectangleScottK *&, RectangleScottK *&, 
			  BoxScottK *&, BoxScottK *&, 
			  CircleScottK *&, CircleScottK *&, 
			  CylinderScottK *&, CylinderScottK *&);

void menuCompVolScottKinney(BoxScottK *&, BoxScottK *&, 
			    CylinderScottK *&, CylinderScottK *&);
void headerScottKinney(void);
void errorInitScottKinney(void);

#endif
