#include <iostream>
#include <string>
#include <Windows.h>
#include "Maze.h"

PlayerPosition Maze::findEnterance()
{
	PlayerPosition enterance;
	for (int i = 0; i <= mazesize-1; ++i)
	{
		if (maze[i][0] == ' ')
		{
			enterance.setRow(i);
			enterance.setCol(1);
		}
		if (maze[i][mazesize - 1] == Character::PATH)
		{
			enterance.setRow(i);
			enterance.setCol(mazesize-2);
		}
		if (maze[0][i] == Character::PATH)
		{
			enterance.setRow(1);
			enterance.setCol(i);
		}
		if (maze[mazesize - 1][i] == Character::PATH)
		{
			enterance.setRow(mazesize - 2);
			enterance.setCol(i);
		}
	}
	if (enterance.getRow() == 0 && enterance.getCol() == 0)
	{
		perror("Your maze doesnt have an enterance");
		end();
		exit(EXIT_FAILURE);
	}
	return enterance;
}

PlayerPosition Maze::findExit()
{
	PlayerPosition ex;
	for (int i = 0; i <= mazesize - 1; ++i)
	{
		if (maze[i][0] == Character::EXIT)
		{
			ex.setRow(i);
			ex.setCol(1);
		}
		if (maze[i][mazesize - 1] == Character::EXIT)
		{
			ex.setRow(i);
			ex.setCol(mazesize - 2);
		}
		if (maze[0][i] == Character::EXIT)
		{
			ex.setRow(1);
			ex.setCol(i);
		}
		if (maze[mazesize - 1][i] == Character::EXIT)
		{
			ex.setRow(mazesize - 2);
			ex.setCol(i);
		}
	}
	if (ex.getRow() == 0 && ex.getCol() == 0)
	{
		perror("Your maze doesnt have an exit");
		end();
		exit(EXIT_FAILURE);
	}
	return ex;
}

void Maze::setPlayerPositionAtEnterance()
{
	position.push_back(findEnterance());
}

void Maze::markPlayer()
{
	maze[position.back().getRow()][position.back().getCol()]=Character::PLAYER;
}

void Maze::markPath()
{
	maze[position.back().getRow()][position.back().getCol()]='.';
}

bool Maze::checkRight()
{
	int row = position.back().getRow();
	int col = position.back().getCol();
	if (col == mazesize - 1)return false;
	if (maze[row][col + 1] == Character::PATH)return true;
	else return false;
}
bool Maze::checkDown()
{
	int row = position.back().getRow();
	int col = position.back().getCol();
	if (row == mazesize - 1)return false;
	if (maze[row + 1][col] == Character::PATH)return true;
	else return false;
	
}
bool Maze::checkLeft()
{
	int row = position.back().getRow();
	int col = position.back().getCol();
	if (col == 0) return false;
	if (maze[row][col - 1]== Character::PATH) return true;
	else return false;
	
}
bool Maze::checkUp()
{
	int row = position.back().getRow();
	int col = position.back().getCol();
	if (row == 0)return false;
	if (maze[row - 1][col] == Character::PATH)return true;
	
	else return false;
}
bool Maze::checkAll()
{
	if (checkRight() || checkDown() || checkLeft() || checkUp())return true;
	else return false;
}
void Maze::moveDown()
{ 
	markPath();
	PlayerPosition next;
	next = position.back();
	next.setRow(next.getRow() + 1);
	position.push_back(next);
	markPlayer();	
}
bool Maze::goDown()
{
	if (checkDown() == false)return false;
	else
	{
		moveDown();
		moves.push_back(Moves::DOWN);
		goDown();
		return true;
	}
}
void Maze::moveRight()
{
	markPath();
	PlayerPosition next;
	next = position.back();
	next.setCol(next.getCol() + 1);
	position.push_back(next);
	markPlayer();
}

bool Maze::goRight()
{
	if (checkRight() == false)return false;
	else
	{
		moveRight();
		moves.push_back(Moves::RIGHT);
		goRight();
		return true;
	}
}

void Maze::moveLeft()
{
	markPath();
	PlayerPosition next;
	next = position.back();
	next.setCol(next.getCol() - 1);
	position.push_back(next);
	markPlayer();
}
bool Maze::goLeft()
{
	if (checkLeft() == false)return false;
	else
	{
		moveLeft();
		moves.push_back(Moves::LEFT);
		goLeft();
		return true;
	}
}
void Maze::moveUp()
{
	markPath();
	PlayerPosition next;
	next = position.back();
	next.setRow(next.getRow() - 1);
	position.push_back(next);
	markPlayer();
}
bool Maze::goUp()
{
	if (checkUp() == false) return false;
	
	else
	{
		moveUp();
		moves.push_back(Moves::UP);
		goUp();
		return true;
	}
}

bool Maze::goTillDeadEnd()
{
	if (isEnd())return true;
	
	if (goRight() && goTillDeadEnd()) return true;
	if (goDown() && goTillDeadEnd()) return true;
	if (goLeft() && goTillDeadEnd()) return true;
	if (goUp() && goTillDeadEnd()) return true;
	
	return false;
	
}

void Maze::moveBack()
{
	switch (moves.back())
	{
	case Moves::UP:
		moves.pop_back();
		moveDown();
		break;

	case Moves::RIGHT:
		moves.pop_back();
		moveLeft();
		break;

	case Moves::DOWN:
		moves.pop_back();
		moveUp();
		break;

	case Moves::LEFT:
		moves.pop_back();
		moveRight();
		break;

	default:
		perror("error");
		end();
		exit(EXIT_FAILURE);
	}
}

bool Maze::goBackTillFirstAvailableMove()
{
	if (checkAll())return false;
	moveBack();
	goBackTillFirstAvailableMove();
	return true;
}

bool Maze::isEnd()
{
	if (position.back() == findExit()) return true;
	else return false;
}

void Maze::moveOnlyCorrectSteps()
{
	setPlayerPositionAtEnterance();
	for (auto i : moves)
	{
		switch (i)
		{
		case Moves::DOWN:
			moveDown();
			break;

		case Moves::RIGHT:
			moveRight();
			break;

		case Moves::LEFT:
			moveLeft();
			break;

		case Moves::UP:
			moveUp();
			break;

		default:
			perror("error");
			end();
			exit(EXIT_FAILURE);
		}
	}
}
