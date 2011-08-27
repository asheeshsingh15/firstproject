#include "Stack.h"

Stack::Stack()
{
	top=0;
}
 int Stack::isFull()
{
 if( top == MAX )
    return 1;
 else 
    return 0;
}
 int Stack::isEmpty()
{
 if( top == 0 )
   return 1;
 else
   return 0;
}
 void Stack::push(int i)
{
 if( 0 == isFull() )
  {
    arr[top++]=i;
    //top++;
  std::cout << "Item " << i <<" is added to stack\n";

  }
 else
  std::cout << "Stack is full \n";
}
 void Stack::pop()
{
 if( 0 == isEmpty() )
  {
      std::cout << "Item "<<arr[--top]<<" is removed from stack\n";
     // top--;
  }
 else
   std::cout << "Stack is empty\n ";
}

 void Stack::printStack()
{
        std::cout << "Printing stack item..... \n";
	for( int i=0; i<top; i++)
	    std::cout << arr[i] << "  ";
}

