#include "Zombie.hpp"

int main() {
    int N = 5;
    int i;

    Zombie* horde = zombieHorde(N, "HordeZombie");
    if (horde == NULL)
        return 1;
    for (i = 0; i < N; i++) 
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}