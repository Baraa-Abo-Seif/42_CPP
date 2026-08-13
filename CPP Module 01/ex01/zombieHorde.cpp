#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
    int i;
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    for (i = 0; i < N; i++) 
    {
        horde[i].setName(name);
    }
    return horde;
}
