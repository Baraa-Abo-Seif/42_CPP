#include "ScavTrap.hpp"
int main( void )
{
    {
        ClapTrap a("ClapTrap A");
        ClapTrap b("ClapTrap B");

        a.attack("ClapTrap B");
        b.takeDamage(100);
        b.beRepaired(5);
        b.attack("ClapTrap A");
        a.takeDamage(2);
        a.beRepaired(3);
    }
            std::cout << "ClapTrap: A and B have finished their actions.------------------------------" << std::endl;
    {
        ScavTrap c("ScavTrap C");
        ScavTrap d("ScavTrap D");

        c.attack("ScavTrap D");
        d.takeDamage(100);
        d.beRepaired(5);
        d.attack("ScavTrap C");
        c.takeDamage(2);
        c.beRepaired(3);
        c.guardGate();
    }
    return 0;
}