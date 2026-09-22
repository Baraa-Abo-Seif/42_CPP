#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 _rawBits;
    static const int    _fractionalBits = 8;

public:
    // Orthodox Canonical Form
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    // Constructors from ex01
    Fixed(const int value);
    Fixed(const float value);

    // Getters and Setters
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    // Conversion functions
    float   toFloat(void) const;
    int     toInt(void) const;

    // 6 Comparison operators
    bool    operator>(const Fixed &rhs) const;
    bool    operator<(const Fixed &rhs) const;
    bool    operator>=(const Fixed &rhs) const;
    bool    operator<=(const Fixed &rhs) const;
    bool    operator==(const Fixed &rhs) const;
    bool    operator!=(const Fixed &rhs) const;

    // 4 Arithmetic operators
    Fixed   operator+(const Fixed &rhs) const;
    Fixed   operator-(const Fixed &rhs) const;
    Fixed   operator*(const Fixed &rhs) const;
    Fixed   operator/(const Fixed &rhs) const;

    // 4 Increment / Decrement operators
    Fixed   &operator++(void);//++a
    Fixed   operator++(int);//a++
    Fixed   &operator--(void);//--a
    Fixed   operator--(int);//a--

    // 4 Static member functions (min / max)
    static Fixed        &min(Fixed &a, Fixed &b);
    static const Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    static const Fixed  &max(const Fixed &a, const Fixed &b);
};

// Stream insertion operator overload
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif