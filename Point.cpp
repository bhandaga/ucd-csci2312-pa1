//
//Class Definition of Point.h
//

#include <iostream>
#include <iomanip>
#include "Point.h"

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

