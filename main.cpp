#include <iostream>
#include "StringStack.h"
using namespace std;

int main()
{
    StringStack stak;
    stak.push("hi");
    if (stak.isEmpty()) {
        cout<<"Empty: Wrong"<<endl;
    } else {
        cout<<"Not Empty: Right"<<endl;
    }
    stak.pop();
     if (stak.isEmpty()) {
        cout<<"Empty: Right"<<endl;
    } else {
        cout<<"Not Empty: Wrong"<<endl;
    }
    return 0;
}