#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(FragTrap const & other);
    FragTrap & operator=(FragTrap const & other);
    virtual ~FragTrap();
    
    FragTrap(std::string const & name);

    void highFivesGuys();
};
#endif