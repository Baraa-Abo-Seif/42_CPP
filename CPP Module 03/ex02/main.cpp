#include "FragTrap.hpp"
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
    std::cout << "ClapTrap A and ClapTrap B have finished their battle.----------------------------------------" << std::endl;
    {
        FragTrap e("FragTrap E");
        FragTrap f("FragTrap F");

        e.attack("FragTrap F");
        f.takeDamage(100);
        f.beRepaired(5);
        f.attack("FragTrap E");
        e.takeDamage(2);
        e.beRepaired(3);
        e.highFivesGuys();
    }
    return 0;
}