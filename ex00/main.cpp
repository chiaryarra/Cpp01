#include "Zombie.hpp"

int main(void)
{
    Zombie	jack("Jack");
    Zombie	*new_jack = jack.newZombie("NewJack");
	jack.announce();
	new_jack->randomChump("RandomJack");
	new_jack->announce();
	delete new_jack;
}