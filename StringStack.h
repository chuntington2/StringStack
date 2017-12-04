#ifndef _STRINGSTACK_H_
#define _STRINGSTACK_H_
#include <string>
#include <vector>
#include "TrueStack.h"

class StringStack : public TrueStack
{
    private:
        std::vector<std::string> Strings;
    public:
        StringStack();
        std::string pop();
        void push(std::string);
        bool isEmpty();
};

#endif