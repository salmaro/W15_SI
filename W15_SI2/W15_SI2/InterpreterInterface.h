#pragma once
#include "OperatorManager.h"

class InterpreterInterface
{
	virtual double interpret(const std::string& in, OperatorManager& om) = 0;
};

