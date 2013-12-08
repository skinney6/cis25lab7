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

class RectangleScottK {
protected:
    PointScottK ll;
    PointScottK ur;
public:
    RectangleScottK();
    RectangleScottK(PointScottK &, PointScottK &);
    RectangleScottK(const RectangleScottK &);
    ~RectangleScottK();

    RectangleScottK& operator=(const RectangleScottK &);
    
    void update(PointScottK &, PointScottK &);

    FractionScottK getAreaScottKinney(void);

    friend ostream& operator<<(ostream &, const RectangleScottK &);
    friend istream& operator>>(istream &, RectangleScottK &);

    bool operator==(const RectangleScottK &) const;
    bool operator!=(const RectangleScottK &) const;
    bool operator<=(const RectangleScottK &) const;
    bool operator<(const RectangleScottK &) const;
    bool operator>=(const RectangleScottK &) const;
    bool operator>(const RectangleScottK &) const;

};

#endif
