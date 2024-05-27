# Makefile
CXX = g++
CXXFLAGS = -std=c++11 -Wall
SFML_LIBS = -lsfml-graphics -lsfml-window -lsfml-system

SRC = main.cpp src/Board.cpp src/Tetromino.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = tetris

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML_LIBS)

clean:
	rm -f $(OBJ) $(EXEC)
