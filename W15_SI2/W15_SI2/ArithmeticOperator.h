#pragma once
#include <functional>
#include <string>

class ArithmeticOperator
{
	std::function<double(double, double)> oper;
	std::string operatorName;
	std::string operatorSymbol;
	unsigned int operatorPriority;


public:
	ArithmeticOperator() = default;
	ArithmeticOperator(std::function<double(double, double)> oper, std::string operatorName, std::string operatorSign, unsigned int operatorPrior)
		:oper(oper),
		operatorName(operatorName),
		operatorSymbol(operatorSign),
		operatorPriority(operatorPrior) {}

	~ArithmeticOperator() = default;

	double operator()(double, double);
	std::function<double(double, double)> getOper();
	std::string getOperatorName() const;
	std::string getOperatorSymbol() const;
	unsigned int getOperatorPriority();
};

