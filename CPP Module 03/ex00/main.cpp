#include "ClapTrap.hpp"
int main( void )
{

    ClapTrap a("ClapTrap A");
    ClapTrap b("ClapTrap B");

    a.attack("ClapTrap B");
    b.takeDamage(100);
    b.beRepaired(5);
    b.attack("ClapTrap A");
    a.takeDamage(2);
    a.beRepaired(3);

    return 0;
}