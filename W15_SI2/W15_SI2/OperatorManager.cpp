#include "OperatorManager.h"

OperatorManager::OperatorManager()
{
    auto lambdaDodawanie = [](double x, double y) {return x + y; };
    auto lambdaOdejmowanie = [](double x, double y) {return x - y; };
    auto lambdaMnozenie = [](double x, double y) {return x * y; };
    auto lambdaDzielenie = [](double x, double y) {if (y == 0) throw std::logic_error("Dont divide by 0"); return x / y; };

    ArithmeticOperator dodawanie(lambdaDodawanie, "dodawanie", "+", 2);
    ArithmeticOperator odejmowanie(lambdaOdejmowanie, "odejmowanie", "-", 2);
    ArithmeticOperator mnozenie(lambdaMnozenie, "mnozenie", "*", 1);
    ArithmeticOperator dzielenie(lambdaDzielenie, "dzielenie", "/", 1);

    setOperators(dodawanie);
    setOperators(odejmowanie);
    setOperators(mnozenie);
    setOperators(dzielenie);

}

void OperatorManager::setOperators(ArithmeticOperator newOper)
{
    operators.push_back(newOper);
}

std::vector<ArithmeticOperator>& OperatorManager::getOperators()
{
    return operators;
}

std::string OperatorManager::findOperator(std::string symbol) const
{
    for (size_t i{ 0 }; i <= operators.size();i++) {
        if (operators[i].getOperatorSymbol() == symbol) {
            return std::to_string(i);
        }
    }

    return "npos";
}

void OperatorManager::registerOperator(ArithmeticOperator newOperator)
{
    operators.push_back(newOperator);
}

void OperatorManager::unregisterOperator(const std::string name)
{
    auto positionInOperatorVector = std::find_if(operators.begin(), operators.end(), [name](auto a) {return a.getOperatorName() == name;});
    if (positionInOperatorVector != operators.end()) {
        operators.erase(positionInOperatorVector);
    }
    else
        std::cout << "\nThere is no such operator!";
}
