#include "StringStack.h"

StringStack::StringStack()
{

}

std::string StringStack::pop()
{
    if (Strings.size() < 1) {
        return "No Strings in Stack";

    }
    std::string message = Strings.back();
    Strings.pop_back();
    return message;
}

void StringStack::push(std::string myString)
{
    Strings.push_back(myString);
}

bool StringStack::isEmpty()
{
    if (Strings.size() < 1) {
        return true;
    } else {
        return false;
    }
}