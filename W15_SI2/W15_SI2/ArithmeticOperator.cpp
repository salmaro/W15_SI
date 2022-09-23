#include "ArithmeticOperator.h"

double ArithmeticOperator::operator()(double x, double y)
{
    return oper(x, y);
}

std::function<double(double, double)> ArithmeticOperator::getOper()
{
    return oper;
}

std::string ArithmeticOperator::getOperatorName() const
{
    return operatorName;
}

std::string ArithmeticOperator::getOperatorSymbol() const
{
    return operatorSymbol;
}

unsigned int ArithmeticOperator::getOperatorPriority()
{
    return operatorPriority;
}
