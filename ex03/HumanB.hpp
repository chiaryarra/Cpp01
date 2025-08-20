#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string	name;
	Weapon	weapon;	
public:
    HumanA(std::string name);
    ~HumanA();
	void attack();
};

#endif