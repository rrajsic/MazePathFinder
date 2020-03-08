#include <iostream>
#include "Maze.h"
void Maze::printMaze()
{
	for (int row = 0; row < mazesize; ++row) {
		for (int col = 0; col < mazesize; ++col)
		{
			std::cout << maze[row][col];
		}
		std::cout << std::endl;
	}
}
void Maze::printMoves()
{
	std::cout << "Moves(";
	for (auto i : moves)
	{
		switch (i)
		{
		case Moves::RIGHT:
			std::cout << "RIGHT,";
			break;
		case Moves::DOWN:
			std::cout << "DOWN,";
			break;
		case Moves::LEFT:
			std::cout << "LEFT,";
			break;
		case Moves::UP:
			std::cout << "UP,";
			break;
		}
	}
	std::cout << ")" << std::endl;
}

void Maze::printPositions()
{
	std::cout << "Positions(";
	for (auto i : position)
	{
		std::cout << i.getRow() << "," << i.getCol() << " ; ";
	}
	std::cout << ")" << std::endl;
}

void Maze::printEndInformation()
{
	std::cout << "\nNumber of total steps taken: " << position.size() << std::endl;
	std::cout << "Number of correct steps made: " << moves.size() << std::endl;
	
}
