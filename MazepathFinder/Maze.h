#ifndef MAZE_H
#define MAZE_H
#define MAZEDESIGNSIZE_1 32
#define MAZEDESIGNSIZE_2 34
#define MAZEDESIGNSIZE_3 24

#include "PlayerPosition.h"
#include "EnumMoves.h"
#include "CharactersMark.h"
#include <vector>


class Maze
{
private:
	char** maze;										
	int mazesize;

	std::vector<PlayerPosition> position;
	
	std::vector<Moves> moves;

public :
	Maze (int msize)
	{
		this->mazesize = msize;
		maze = new char * [mazesize];
		for (int i = 0 ; i < mazesize; i++)
			maze[i] = new char[mazesize];

		for (int row = 0; row < mazesize; ++row)
			for (int col = 0; col < mazesize; ++col)
			{
				maze[row][col]=Character::WALLS;						
			}
		
	}

	void mazeDesign_1();
	void mazeDesign_2();
	void mazeDesign_3();

	PlayerPosition findEnterance();
	PlayerPosition findExit();
	
	void setPlayerPositionAtEnterance();

	void markPlayer();
	void markPath();

	//void placePlayerMark(int row, int col);								//for testing
	//void setPlayerPosition(int row, int col);							//for testing

	

	bool checkRight();
	bool checkDown();
	bool checkLeft();
	bool checkUp();
	bool checkAll();

	void moveDown();
	void moveRight();
	void moveLeft();
	void moveUp();

	bool goDown();
	bool goRight();
	bool goLeft();
	bool goUp();

	bool goTillDeadEnd();

	void moveBack();
	bool goBackTillFirstAvailableMove();

	bool isEnd();

	////////////////////////////////////////EXTRA FUNCTIONALITY

	void printMaze();
	void printMoves();
	void printPositions();
	void printEndInformation();

	void moveOnlyCorrectSteps();


	void end()
	{
		for (int i = 0; i < mazesize; i++)
			delete[] maze[i];
		delete maze;
	}
};

#endif