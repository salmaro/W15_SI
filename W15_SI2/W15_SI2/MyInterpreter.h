#pragma once
#include "InterpreterInterface.h"
#include "InterpreterException.h"
#include <sstream>
#include <iostream>

class MyInterpreter
	: public InterpreterInterface
{

public:
	virtual double interpret(const std::string& in, OperatorManager& om) override;
};

