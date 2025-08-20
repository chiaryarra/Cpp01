#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    std::cout << "Weapon " << type << " created!" << std::endl;
    this->type = type;
}

Weapon::~Weapon(){
    std::cout << "Weapon " << type << " Destroyed!" << std::endl;
}

std::string Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}