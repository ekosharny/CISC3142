#include <iostream>
#include <cstdlib>

#include "String.h"
#include "String_Exception.h"

using namespace std;

String::String(const char *cs) : cs(new char[strlen(cs)+1]){}

String::String(const String &s): cs(new char[strlen(s.cs)+1]) {
    for(int i=0; i<strlen(cs); i++){
        cs[i]=s.cs[i];
    }
}

int String::length() const{
    return strlen(cs);
}

String &String::operator +=(const String &s){
    cs = strcat(cs, s.cs);
    return *this; 
}

ostream &operator <<(ostream &os, const String &s){
    for (int i=0; i<strlen(s.cs); i++){
        os<<s.cs[i];
    }
}

bool operator ==(const String &s1, const String &s2){
    int compare = strcmp(s1.cs, s2.cs);
    if(compare = 0)
        return true;
    else
        return false;
}

String operator +(const String &s1, const String &s2){
    String temp = s1;
    return temp+=s2;
}

String::~String() {
    delete [] cs;
}

String &String::operator =(const String &rhs){
    char* c = strcpy(cs, rhs.cs);
    String* s = new String[strlen(c)];
    return *s;
}

char &String::operator [](int index){
    if(index<0 || index>= strlen(cs))throw String_Exception("Index out of bounds");
    return cs[index];
}

int String::find(char c) const {
    char *find = strchr(cs, c);
    return *find;
}

void String::clear(){
    cs = strcpy(cs, "");
}
