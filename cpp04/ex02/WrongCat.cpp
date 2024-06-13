#include "WrongCat.hpp"

Wrong_Cat::Wrong_Cat() {
	this->_type = "Wrong_Cat";
	std::cout << "Wrong_Cat constructor called" << std::endl;
};

Wrong_Cat::~Wrong_Cat() {
	std::cout << "Wrong_Cat destructor called" << std::endl;
};

void Wrong_Cat::makeSound() const {
	std::cout << "Wrong Miaaaouw" << std::endl;
}

