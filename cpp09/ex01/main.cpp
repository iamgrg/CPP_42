#include "RPN.hpp"
#include <iostream>
#include <stack>
#include <sstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: RPN \"<expression>\"" << std::endl;
        return 1;
    }
    std::string input = argv[1];
    std::istringstream iss(input);
	RPN rpn;
    std::string token;
	try{
		while (iss >> token) {
			rpn.process(token);
		}
		rpn.checkResult();
		rpn.printResult(); 
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
    return 0;
}
