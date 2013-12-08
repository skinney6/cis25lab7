// FILE Cylinder Class Specification File
/**
 * Program name: ScottKinneyLab7Cylinder.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7CYLINDER_H
#define SCOTTKINNEYLAB7CYLINDER_H
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Circle.h"

class CylinderScottK : public CircleScottK {
private:
    FractionScottK height;
public:
    CylinderScottK();
    CylinderScottK(FractionScottK &);
    CylinderScottK(CircleScottK &, FractionScottK &);
    CylinderScottK(PointScottK &, FractionScottK &, FractionScottK &);
    ~CylinderScottK();

    void update(PointScottK &, FractionScottK &, FractionScottK &);
    void print(void);
    FractionScottK getAreaScottKinney(void);
    FractionScottK getVolScottKinney(void);    
};

#endif
