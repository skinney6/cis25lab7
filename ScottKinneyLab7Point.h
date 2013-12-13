// FILE Point Class Specification File
/**
 * Program name: ScottKinneyLab7Point.h
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7POINT_H
#define SCOTTKINNEYLAB7POINT_H
#include "ScottKinneyLab7Fraction.h"

class PointScottK {
    friend ostream& operator<<(ostream &, const PointScottK &);
    friend istream& operator>>(istream &, PointScottK &);
private:
    FractionScottK x;
    FractionScottK y;
public:
    PointScottK();
    PointScottK(FractionScottK &, FractionScottK &);
    PointScottK(const PointScottK &);
    ~PointScottK();
    PointScottK& operator=(const PointScottK &);
    FractionScottK getX();
    FractionScottK getY();

    FractionScottK area(const PointScottK &) const;
    void moveBy(const FractionScottK &, const FractionScottK &);
    void moveBy(int);
    void flipByX();
    void flipByY();
    void flipThroughOrigin();
    void update(FractionScottK &, FractionScottK &);
    bool operator==(const PointScottK &) const;
    bool operator!=(const PointScottK &) const;
    bool operator<=(const PointScottK &) const;
    bool operator<(const PointScottK &) const;
    bool operator>=(const PointScottK &) const;
    bool operator>(const PointScottK &) const;
};

#endif
