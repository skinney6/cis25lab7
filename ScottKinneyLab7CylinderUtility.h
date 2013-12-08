// FILE Cylinder Utility Header File
/**
 * Program name: ScottKinneyLab7CylinderUtility.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7CYLINDERUTILITY_H
#define SCOTTKINNEYLAB7CYLINDERUTILITY_H

#include "ScottKinneyLab7Cylinder.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Fraction.h"

void cylinderInit(CylinderScottK *&);

FractionScottK compareCylinderArea(CircleScottK &, CircleScottK &);
FractionScottK compareCylinderVol(CircleScottK &, CircleScottK &);

#endif
