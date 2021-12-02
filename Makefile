CC = g++
C_FLAGS = -std=c++11 -c -g -Og -Wall -Werror -pedantic
OBJECTS = TFractal.o Triangle.o
DEPS = Triangle.h
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
EXE = Triangle

all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXE) $(LIBS)
%.o: %.cpp $(DEPS)
	$(CC) $(C_FLAGS) -o $@ $<
clean:
	rm $(OBJECTS) $(EXE)
