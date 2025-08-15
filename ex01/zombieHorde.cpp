#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    
	Zombie* horde = new Zombie[N];
	
	int	i = 0;
	std::string	zombie_name;
	while (i < N)
	{
		zombie_name = name + std::to_string(i + 1);
		horde[i].setName(zombie_name);
		i++;
	}
	return (horde);
}