#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap & FragTrap::operator=(FragTrap const & other) {
    if (this != &other) 
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor for " << _name << " called" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor for " << _name << " called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}   
