#include <iostream>

using namespace std;

bool allAreEqual(int, int, int);
bool twoAreEqual(int, int, int);
bool noneAreEqual(int, int, int);
bool areAscending(int, int, int);
bool areDescending(int, int, int);
bool strictlyAscending(int, int, int);
bool strictlyDescending(int, int, int);

int main() {
    std::cout << std::boolalpha;
    int a, b, c;
    cout<< "first Number?";
    cin>>a;
    cout << "second Number?";
    cin>>b;
    cout<< "third Number?";
    cin>>c;
    cout<< "allAreEqual: " << allAreEqual(a,b,c) <<"\n";
    cout<< "twoAreEqual:  " << twoAreEqual(a,b,c) <<"\n";
    cout<< "noneAreEqual: " << noneAreEqual(a,b,c) <<"\n";
    cout<< "areAscending: " << areAscending(a,b,c) <<"\n";
    cout<< "areDescending: " << areDescending(a,b,c) <<"\n";
    cout<< "strictlyAscending: " << strictlyAscending(a,b,c) <<"\n";
    cout<< "strictlyDescending: " << strictlyDescending(a,b,c) <<"\n";

    return 0;
}
bool allAreEqual(int a, int b, int c){
    if(a==b && b==c)
        return true;
    return false;
}
bool twoAreEqual(int a, int b, int c){
    if((a==b && c!=a) || (b==c && a!=b) || (a==c && b!=a))
        return true;
    return false;
}
bool noneAreEqual(int a, int b, int c){
    if(a!=b && b!=c && a!=c)
        return true;
    return false;
}
bool areAscending(int a, int b, int c){
    if(a<=b && b<=c)
        return true;
    return false;
}
bool areDescending(int a, int b, int c){
    if(a>=b && b>=c)
        return true;
    return false;
}
bool strictlyAscending(int a, int b, int c){
    if(a<b && b<c)
        return true;
    return false;
}
bool strictlyDescending(int a, int b, int c){
    if(a>b && b>c)
        return true;
    return false;
}