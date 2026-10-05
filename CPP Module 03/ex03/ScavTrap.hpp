#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(ScavTrap const & other);
    ScavTrap & operator=(ScavTrap const & other);
    virtual ~ScavTrap();
    
    ScavTrap(std::string const & name);

    void    attack(const std::string& target);
    void    guardGate();
};

#endif