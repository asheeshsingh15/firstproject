#include "Stack.h"
int main()
{
	int j=5;
	Stack s;
	s.push(j);
	s.push(j);
	s.push(j);
	s.pop();
	s.push(j+1);
	s.push(j+2);
	s.pop();
	s.printStack();
	return 0;
}
