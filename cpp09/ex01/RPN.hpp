#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
public:
	RPN();
	~RPN();
	void process(std::string token);
	void checkResult(void) const;
	void printResult(void) const;

private:
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);
	std::stack<double> _s;
};

#endif // RPN_HPP