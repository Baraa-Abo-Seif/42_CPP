#include "DiamondTrap.hpp"
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
        
        ScavTrap a("ScavTrap A");
        ScavTrap b("ScavTrap B");

        a.attack("ScavTrap B");
        b.takeDamage(20);
        b.beRepaired(5);
        b.attack("ScavTrap A");
        a.takeDamage(2);
        a.beRepaired(3);
        a.guardGate();
    }
            std::cout << "ScavTrap: A and B have finished their actions.------------------------------" << std::endl;
    {
        FragTrap a("FragTrap A");
        FragTrap b("FragTrap B");

        a.attack("FragTrap B");
        b.takeDamage(30);
        b.beRepaired(5);
        b.attack("FragTrap A");
        a.takeDamage(2);
        a.beRepaired(3);
        a.highFivesGuys();
    }
            std::cout << "FragTrap: A and B have finished their actions.------------------------------" << std::endl;
    {
        DiamondTrap a("DiamondTrap A");
        DiamondTrap b("DiamondTrap B");

        a.attack("DiamondTrap B");
        b.takeDamage(30);
        b.beRepaired(5);
        b.attack("DiamondTrap A");
        a.takeDamage(2);
        a.beRepaired(3);
        a.whoAmI();
    }
    return 0;
}