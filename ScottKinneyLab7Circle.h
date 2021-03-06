// FILE Circle Class Specification File
/**
 * Program name: ScottKinneyLab7Circle.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7CIRCLE_H
#define SCOTTKINNEYLAB7CIRCLE_H
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Shape.h"

class CircleScottK : public ShapeScottK {
protected:
    PointScottK center;
    FractionScottK radius;  // no negative value allowed
public:
    CircleScottK();
    CircleScottK(PointScottK &, FractionScottK &);
    CircleScottK(const CircleScottK &);       
    ~CircleScottK();

    CircleScottK& operator=(const CircleScottK &);

    void print(ostream &);
    FractionScottK getR(void) const;
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
    void update(PointScottK &, FractionScottK &);
    friend ostream& operator<<(ostream &, CircleScottK &);
    friend istream& operator>>(istream &, CircleScottK &);

};

#endif
