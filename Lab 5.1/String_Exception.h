#ifndef STRING_EXCEPTION_H
#define STRING_EXCEPTION_H

#include <string>

class String_Exception {
public:
    String_Exception(std::string what) : what(what) {}
   	std::string getWhat() {return what;}
private:
    std::string what;
};

#endif /* STRING_EXCEPTION_H */

