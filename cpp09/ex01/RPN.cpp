#include "RPN.hpp"
#include <stdexcept> 

RPN::RPN(){ };
RPN::~RPN(){ };

void RPN::checkResult(void) const {
	if(this->_s.size() > 1)
		throw std::runtime_error("Error: Too many operands for operation.");
}

void RPN::printResult(void) const {
		std::cout << this->_s.top() << std::endl;
}

void RPN::process(std::string token) {
    if (token == "+" || token == "-" || token == "*" || token == "/") {
        if (this->_s.size() < 2) {
            throw std::runtime_error("Error: Not enough operands for operation.");
        }
        double op2 = this->_s.top(); this->_s.pop();
        double op1 = this->_s.top(); this->_s.pop();

        if (token == "+") this->_s.push(op1 + op2);
        else if (token == "-") this->_s.push(op1 - op2);
        else if (token == "*") this->_s.push(op1 * op2);
        else if (token == "/") {
            if (op2 == 0) {
                throw std::runtime_error("Error: Division by zero.");
            }
            this->_s.push(op1 / op2);
        }
    } else if (token[0] >= '0' && token[0] <= '9' && token.size() == 1) {
		std::istringstream iss(token);
		double value;
		iss >> value;
        this->_s.push(value);
    } else {
        throw std::runtime_error("Error: Invalid token '" + token + "'.");
    }
}

/*
std::istringstream iss(token);
double value;
iss >> value;
this->_s.push(value);
*/