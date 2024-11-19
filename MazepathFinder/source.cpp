#include <iostream>
#include <conio.h>
#include "Maze.h"

void Maze1();
void Maze2();
void Maze3();
void printOptions();

int main()
{
	while (true)
	{
		system("cls");
		printOptions();
		char a('\0');
		a = _getch();
		switch (a)
		{
		case '1':
			Maze1();
			break;
		case '2':
			Maze2();
			break;
		case '3':
			Maze3();
			break;
		case 'x':
		case 'X':
			exit(EXIT_SUCCESS);
		}
	}


}

void Maze1()
{
	Maze maze(MAZEDESIGNSIZE_1);

	maze.mazeDesign_1();
	maze.setPlayerPositionAtEnterance();

	while (true) {
		if (maze.goTillDeadEnd())break;
		maze.goBackTillFirstAvailableMove();
	}
	maze.mazeDesign_1();
	maze.printEndInformation();
	maze.moveOnlyCorrectSteps();
	maze.printMaze();
	maze.end();
	system("pause");
}

void Maze2()
{
	Maze maze(MAZEDESIGNSIZE_2);

	maze.mazeDesign_2();
	maze.setPlayerPositionAtEnterance();

	while (true) {
		if (maze.goTillDeadEnd())break;
		maze.goBackTillFirstAvailableMove();
	}

	maze.mazeDesign_2();
	maze.printEndInformation();
	maze.moveOnlyCorrectSteps();
	maze.printMaze();
	maze.end();
	system("pause");
}

void Maze3()
{
	Maze maze(MAZEDESIGNSIZE_3);

	maze.mazeDesign_3();
	maze.setPlayerPositionAtEnterance();

	while (true) {
		if (maze.goTillDeadEnd())break;
		maze.goBackTillFirstAvailableMove();
	}
	maze.mazeDesign_3();
	maze.printEndInformation();
	maze.moveOnlyCorrectSteps();
	maze.printMaze();
	maze.end();
	system("pause");
}

void printOptions()
{
	std::cout << "Select maze design: " << std::endl;
	std::cout << "1 - Maze design 1" << std::endl;
	std::cout << "2 - Maze design 2" << std::endl;
	std::cout << "3 - Maze design 3" << std::endl;
	std::cout << "\nPress (x) to exit" << std::endl;
}
