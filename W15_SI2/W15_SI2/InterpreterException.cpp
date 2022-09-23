#include "InterpreterException.h"

std::string InterpreterException::what() noexcept {
    std::string result = '"' + name + " : " + errorMessage + " : " + expression + '"';

    return result;
}
