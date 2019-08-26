#include <iostream>
#include "Stack_Exception.h"
#include "Stack.h"

using namespace std;

int main() {

    Stack<int> stack;
    
    stack.push(5);
    stack.push(6);
    stack.push(3);
    stack.push(7);
    
    cout<<stack<<endl;
    
    stack.pop();
    
    cout<<stack<<endl;
    
    Stack<double> stack2;
    
    stack2.push(5.5);
    stack2.push(9.999);
    
    cout<<stack2<<endl;
    
    Stack<string> stack3;
    
    stack3.push("Hello");
    stack3.push("peasants");
    
    cout<<stack3<<endl;
    
    return 0;
}

