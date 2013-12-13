// FILE Shape (abstract) Class Specification File
/**
 * Program name: ScottKinneyLab7Shape.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYSHAPEBOX_H
#define SCOTTKINNEYSHAPEBOX_H
#include "ScottKinneyLab7Fraction.h"

class ShapeScottK {
private:

public:
    virtual FractionScottK getArea(void) const =0;
    virtual FractionScottK getVol(void) const =0;
    virtual void print(ostream &) =0;
};

inline ostream& operator<<(ostream &os, ShapeScottK &shape) {
    shape.print(os);
    return os;
}

#endif
