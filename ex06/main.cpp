#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (-1);
    }
    std::string level = argv[1];
    int code = -1;
    if (level == "DEBUG")
        code = 0;
    else if (level == "INFO")
        code = 1;
    else if (level == "WARNING")
        code = 2;
    else if (level == "ERROR")
        code = 3;
    Harl mr_harl;
    switch (code)
    {
    case 0: mr_harl.complain("DEBUG");
    case 1: mr_harl.complain("INFO");
    case 2: mr_harl.complain("WARNING");
    case 3: mr_harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}