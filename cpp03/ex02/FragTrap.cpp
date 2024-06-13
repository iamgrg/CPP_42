#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Unit [" << _name << "] has been activated by FragTrap constructor." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap [" << _name << "] has been deactivated by FragTrap destructor." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << _name << " requests a high five!" << std::endl;
}
