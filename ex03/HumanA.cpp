#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
    std::cout << "HumanA " << name << " has been born helding the weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA() 
{
    std::cout << "HumanA " << name << " just died!" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "!!" << std::endl;
}

void HumanA::setWeapon(Weapon& weapon)
{
    this->weapon = weapon;
}
