CPP_FILES=$(wildcard ./*.cpp)
CC_FILES=$(wildcard ./*.c)
OBJ_CPP=$(patsubst %.cpp,%.o,$(CPP_FILES))
OBJ_CC=$(patsubst %.c,%.o,$(CC_FILES))
CFLAGS=-Wall -Wextra -Wpedantic -Werror


all: cpp cc link


cpp: $(CPP_FILES)
	g++ $(CFLAGS) -c $^ -I.

cc: $(CC_FILES)
	cc $(CFLAGS) -c $^ -I.

link: cpp cc
	g++ $(CFLAGS) -o test $(OBJ_CPP) $(OBJ_CC)

clean:
	rm *.o
	rm test

