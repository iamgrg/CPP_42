#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound() const{
	std::cout << "Wouf !" << std::endl;
}