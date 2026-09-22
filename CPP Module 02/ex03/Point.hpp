#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;

public:
    // Orthodox Canonical Form
    Point();
    Point(const Point &other);
    Point &operator=(const Point &other);
    ~Point();

    // Constructor with float parameters
    Point(const float x, const float y);

    // Getters for coordinates
    Fixed getX(void) const;
    Fixed getY(void) const;
};

// Function declaration for BSP
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif