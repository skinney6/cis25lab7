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
#include "ScottKinneyLab7Shape.h"

void mainMenu(void);
void menuCompArea(ShapeScottK *[], int);
void menuCompVol(ShapeScottK *[], int);
void menuPrintAllInit(ShapeScottK *[]);
void menuPrint(ShapeScottK *[], int);
void header(void);
void errorInit(void);

#endif
