#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
    DiamondTrap();
    DiamondTrap(DiamondTrap const & other);
    DiamondTrap & operator=(DiamondTrap const & other);
    virtual ~DiamondTrap();

    DiamondTrap(std::string const & name);

    using ScavTrap::attack;

    void whoAmI();
};

#endif