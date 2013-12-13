// FILE Rectangle Class Specification File
/**
 * Program name: ScottKinneyLab7Rectangle.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7RECTANGLE_H
#define SCOTTKINNEYLAB7RECTANGLE_H
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Shape.h"

class RectangleScottK : public ShapeScottK {
private:
    PointScottK ll;
    PointScottK ur;
public:
    RectangleScottK();
    RectangleScottK(PointScottK &, PointScottK &);
    RectangleScottK(const RectangleScottK &);
    ~RectangleScottK();

    RectangleScottK& operator=(const RectangleScottK &);
    
    void update(PointScottK &, PointScottK &);
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
    void print(ostream &);

    friend ostream& operator<<(ostream &, RectangleScottK &);
    friend istream& operator>>(istream &, RectangleScottK &);

    bool operator==(const RectangleScottK &) const;
    bool operator!=(const RectangleScottK &) const;
    bool operator<=(const RectangleScottK &) const;
    bool operator<(const RectangleScottK &) const;
    bool operator>=(const RectangleScottK &) const;
    bool operator>(const RectangleScottK &) const;
};

#endif
