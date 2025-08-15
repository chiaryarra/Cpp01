#include "Zombie.hpp"

Zombie::Zombie(){
    //Standard constructor
}

Zombie::Zombie(std::string name): name(name)
{
    std::cout << "Zombie " << this->name << " created!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " just died" << std::endl;
}

std::string Zombie::getName(void)
{
    return (this->name);
}

void	Zombie::setName(std::string value)
{
	this->name = value;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}