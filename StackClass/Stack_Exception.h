#ifndef STACK_EXCEPTION
#define STACK_EXCEPTION

#include <string>

using namespace std;

class Stack_Exception {
public:
    Stack_Exception(string what) : what(what) {}
    string getWhat() {return what;}
private:
    string what;
};

#endif