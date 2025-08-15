#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
	std::string	getName(void);
	void	setName(std::string value);
	void	announce(void);
    void	randomChump(std::string name);
    Zombie*	newZombie(std::string name);
    Zombie* zombieHorde(int N, std::string);
};

#endif

