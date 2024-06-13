#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
};

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
};

void AAnimal::makeSound() const{

}

std::string AAnimal::getType() const{
	return  this->_type;
}