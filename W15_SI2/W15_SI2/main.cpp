#include <iostream>
#include "ArithmeticOperator.h"
#include "OperatorManager.h"
#include "InterpreterInterface.h"
#include "MyInterpreter.h"
#include <exception>f
#include <math.h>

int main() {

	auto lambdaDodawanie = [](double x, double y) {return x + y; };
	OperatorManager manager;
	auto lambda = [](double a, double b) {return pow(a, b);};
	manager.registerOperator(ArithmeticOperator(lambda, "potegowanie", "^", 1));  // add new operator

	MyInterpreter operatorInterpreter;
	std::cout << operatorInterpreter.interpret("5 * a", manager);
	manager.unregisterOperator("jedzenie");
	manager.unregisterOperator("dodawanie");
	return 0;
}