#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
    std::cout << "HumanB " << name << " has been born unarmed!" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB() {
    std::cout << "HumanB " << name << " has just died!" << std::endl;
}

void	HumanB::attack() {
	if (weapon)
		std::cout << "HumanB " << name << " attacks with their " << weapon->getType() << "!" << std::endl;
	else
		std::cout << "HumanB " << name << " attacks unarmed!" << std::endl;
}
