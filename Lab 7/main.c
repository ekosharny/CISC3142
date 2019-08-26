#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool allAreEqual(int, int, int);
bool twoAreEqual(int, int, int);
bool noneAreEqual(int, int, int);
bool areAscending(int, int, int);
bool areDescending(int, int, int);
bool strictlyAscending(int, int, int);
bool strictlyDescending(int, int, int);

int main(int argc, char** argv) {
   
    int a, b, c;
    printf("first number? ");
    scanf("%d", &a);
    printf("second number? ");
    scanf("%d", &b);
    printf( "third number? ");
    scanf("%d", &c);
    printf( "allAreEqual: ");
    printf("%s", allAreEqual(a,b,c)?"true\n":"false\n");
    printf( "twoAreEqual: ");
    printf("%s", twoAreEqual(a,b,c)?"true\n":"false\n");
    printf( "noneAreEqual: ");
    printf("%s", noneAreEqual(a,b,c)?"true\n":"false\n");
    printf( "areAscending: ");
    printf("%s", areAscending(a,b,c)?"true\n":"false\n");
    printf( "areDescending: ");
    printf("%s", areDescending(a,b,c)?"true\n":"false\n");
    printf( "strictlyAscending: ");
    printf("%s", strictlyAscending(a,b,c)?"true\n":"false\n");
    printf( "strictlyDescending: ");
    printf("%s", strictlyDescending(a,b,c)?"true\n":"false\n");
    

    return (EXIT_SUCCESS);
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