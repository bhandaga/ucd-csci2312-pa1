//GAURAV Bhandari
//Class Definition of Point.h
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"

Point::Point() {
    __x = 0;
    __y = 0;
    __z = 0;
}

Point::Point(double x, double y, double z) {
    __x = x;
    __y = y;
    __z = z;
}

void Point::setX(double newX) {
    __x = newX;
}

void Point::setY(double newY) {
    __y = newY;
}

void Point::setZ(double newZ) {
    __z = newZ;
}

double Point::getX() const {
    return __x;
}

double Point::getY() const {
    return __y;
}

double Point::getZ() const {
    return __z;
}

double Point::distanceTo(const Point &a) const {
    double x1, x2, y1, y2, z1, z2;
    x2 = a.getX();
    x1 = getX();
    y2 = a.getY();
    y1 = getY();
    z2 = a.getZ();
    z1 = getZ();

    return sqrt(pow((x2-x1), 2.0)+pow((y2-y1), 2.0)+pow((z2-z1), 2.0));
}

