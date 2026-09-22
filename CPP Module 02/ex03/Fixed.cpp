#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _rawBits(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
   // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_rawBits = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) : _rawBits(value << _fractionalBits) {
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _rawBits(static_cast<int>(roundf(value * (1 << _fractionalBits)))) {
    //std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_rawBits >> _fractionalBits;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return this->_rawBits > rhs._rawBits;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->_rawBits < rhs._rawBits;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->_rawBits >= rhs._rawBits;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->_rawBits <= rhs._rawBits;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->_rawBits == rhs._rawBits;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return this->_rawBits != rhs._rawBits;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++() {
    ++this->_rawBits;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed &Fixed::operator--() {
    --this->_rawBits;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
