#pragma once
#include <vector>
#include "ArithmeticOperator.h"
#include <stdexcept>
#include <iostream>

class OperatorManager
{
	std::vector<ArithmeticOperator> operators{};

public:
	OperatorManager();
	void setOperators(ArithmeticOperator newOper);
	std::vector<ArithmeticOperator>& getOperators();
	std::string findOperator(std::string name) const;
	void registerOperator(ArithmeticOperator newOperator);
	void unregisterOperator(const std::string name);
};

