#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	// Creates the Zombie on heap memory
	Zombie z(name);
	// Calls announce method
	z.announce();
	// Destructor is automatic called at function end
}