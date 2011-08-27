CPP:=Stack.cpp driver.cpp
OBJ := $(CPP:.cpp=.o)
$(OBJ): $(CPP)
	g++ -c Stack.h
	g++ -c Stack.cpp	
	g++ Stack.o driver.cpp -o stack

clean:
	rm -f *.o *.exe *~
