#include <iostream>
#include <fstream>

using namespace std;

int min(int, int);
bool min(int, int, int &min);
int min(int, int, bool &z);
void min(int, int, bool &z, int &min);


int main() {

    ifstream inFile;
    inFile.open("numbers.txt");
    
    if (!inFile){
        cout<<"file not found";
        exit(1);
    }
    
    int a;
    int b;
    int mini;
    bool boo;
    
    while(inFile >> a >> b){
        
        //calling first min fun
        mini=min(a,b);
        cout<<"int min(x, y): The minimum of "<<a<<" and "<<b<<" is "<< mini<<endl;
        
        //calling second min fun
        bool x = min(a,b,mini);
        if(x==true){
            cout<<"bool min(x, y, min): The minimum of "<<a<<" and "<<b<<" is "<< mini<<endl;
        }
        else
            cout<<"bool min(x, y, min): The numbers are equal (" <<mini<<")"<<endl;
        
        //calling third min fun
        mini = min(a,b,boo);
        if(boo==true){
            cout<<"int min(x, y, ok): The minimum of "<<a<<" and "<<b<<" is "<< mini<<endl;
        }
        else
            cout<<"int min(x, y, ok): The numbers are equal (" <<mini<<")"<<endl;
        
        //calling fourth min fun
        min(a,b,boo,mini);
        if(boo==true){
            cout<<"void min(x, y, ok, m): The minimum of "<<a<<" and "<<b<<" is "<< mini<<endl;
        }
        else
            cout<<"void min(x, y, ok, m): The numbers are equal (" <<mini<<")"<<endl;
        
        cout<<endl;
    }
    
    return 0;
}

int min(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}

bool min(int x, int y, int &min){
    if(x<y)
        min=x;
    else if(x>y)
        min=y;
    else{
        min=x;
        return false;
    }
    return true;
}

int min(int x, int y, bool &b){
    if(x == y){
        b=false;
    }
    else
        b=true;
    if(x>y)
        return y;
    else
        return x;         
}

void min(int x, int y, bool &b, int &min){
    if(x<y){
        min=x;
        b=true;
    }
    else if(x>y){
        min=y;
        b=true;
    }
    else{
        min=x;
        b=false;
    }
}