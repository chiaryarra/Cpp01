#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	// Creates a new zombie on the heap memory (dinamic allocation)
    Zombie	*z = new Zombie(name);
	// Returns a pointer to the new zombie address
	return (z);
	// new zombie will exists until "delete" is called at its pointer
}