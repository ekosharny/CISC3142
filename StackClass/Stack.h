#ifndef STACK_H
#define STACK_H

#define SIZE 10

#include "Stack_Exception.h"

template<class T>
class Stack {
  
public:
    Stack();
    void push(T val);
    T pop();
    T peek()const;
    bool isEmpty();
    int getCapacity(){return SIZE;}
    friend std::ostream &operator <<(std::ostream &os, const Stack &stack){
        for(int i=stack.top; i>=0; i--){
            os<<stack.array[i]<<" ";
        }
        return os;
    }
    
private:
    T *array;
    int top;
};

template <class T>
Stack<T>::Stack()
{
	array = new T[SIZE];
	top = -1;
}

template<class T>
void Stack<T>::push(T val){
    if(top==SIZE) throw Stack_Exception("Stack is full");
    
    top++;
    array[top] = val;
}

template<class T>
T Stack<T>::pop(){
    top--;
    return array[top];
}

template<class T>
T Stack<T>::peek()const{
    return array[top];
}

template<class T>
bool Stack<T>::isEmpty(){
    if(top==-1)
        return true;
    return false;
}


#endif /* STACK_H */

