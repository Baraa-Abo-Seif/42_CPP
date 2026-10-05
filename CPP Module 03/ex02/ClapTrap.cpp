#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap:" << _name << " has been created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "ClapTrap:" << _name << " has been created with copy constructor." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & other) {
    if (this != &other) 
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " has been assigned with copy assignment operator." << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " has been created with custom name." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) 
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } 
    else
        std::cout << "ClapTrap " << _name << " cannot attack due to insufficient energy or hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead and cannot take more damage." << std::endl;
        return;
    }
    if (amount >= _hitPoints) 
        _hitPoints = 0; 
    else 
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage! Current hit points: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) 
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points! Current hit points: " << _hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " cannot be repaired due to insufficient energy or hit points." << std::endl;
}