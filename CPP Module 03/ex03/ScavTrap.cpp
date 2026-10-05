#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other) {
    if (this != &other) 
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor for " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor for " << _name << " called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints == 0) 
    {
        std::cout << "ScavTrap " << _name << " cannot attack, it is already down!" << std::endl;
        return;
    }
    if (_energyPoints == 0) 
    {
        std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
        return;
    }
    _energyPoints -= 1;
    std::cout << "ScavTrap " << _name << " ferociously attacks " << target 
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
