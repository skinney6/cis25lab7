// FILE Box Class Specification File
/**
 * Program name: ScottKinneyLab7Box.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7BOX_H
#define SCOTTKINNEYLAB7BOX_H
#include "ScottKinneyLab7Rectangle.h"
#include "ScottKinneyLab7Point.h"
#include "ScottKinneyLab7Fraction.h"

class BoxScottK : public RectangleScottK {
private:
    FractionScottK height;
public:
    BoxScottK();            
    BoxScottK(FractionScottK &);      
    BoxScottK(RectangleScottK &, FractionScottK &); 
    BoxScottK(PointScottK &, PointScottK &, FractionScottK &); 
    ~BoxScottK();  

    void update(PointScottK &, PointScottK &, FractionScottK &);
    void print(ostream &);
    FractionScottK getHeight(void) const;
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;

    BoxScottK& operator=(const BoxScottK &);
    bool operator==(const BoxScottK &) const;
    bool operator!=(const BoxScottK &) const;
    bool operator<=(const BoxScottK &) const;
    bool operator<(const BoxScottK &) const;
    bool operator>=(const BoxScottK &) const;
    bool operator>(const BoxScottK &) const;
};

#endif
