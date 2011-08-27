#ifndef __STAK__
#define __STAK__
#include<iostream>
#define MAX 10

class Stack 
{
   private:
        int top;
        int arr[MAX];
   public:
	void push(int);
	void pop();
	int isFull();
        int isEmpty();
	void printStack();
	Stack();
};
#endif
