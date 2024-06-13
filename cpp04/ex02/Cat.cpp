#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const {
	std::cout << "Miaaaouw" << std::endl;
}

