#include "Point.hpp"
#include <iostream>

Point::Point() : _x(0), _y(0) {
    // Default constructor
}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {
    // Copy constructor
}

Point &Point::operator=(const Point &other) {
    // Copy assignment operator
    if (this != &other) {
        // Since _x and _y are const we cannot assign to them directly.
        // We can only copy the values from the other point.
        // However since they are const we cannot change them after initialization.
        // Therefore we do not perform any assignment here.
    }   // so say halloooooooooooooo hallooooooooooooooo
    return *this;
}

Point::~Point() {
    // Destructor
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
    // Constructor with float parameters
}

Fixed Point::getX(void) const {
    return this->_x;
}
Fixed Point::getY(void) const {
    return this->_y;
}
