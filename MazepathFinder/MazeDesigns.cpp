#include <iostream>
#include <string>
#include "Maze.h"

void Maze::mazeDesign_1()
{
	//outer walls
	for (int col = 0; col < MAZEDESIGNSIZE_1; ++col) {
		maze[0][col] = Character::OUTERWALLS;							
		maze[MAZEDESIGNSIZE_1-1][col] = Character::OUTERWALLS;
	}
	for (int row = 0; row < MAZEDESIGNSIZE_1; ++row) {
		maze[row][0] = Character::OUTERWALLS;
		maze[row][MAZEDESIGNSIZE_1-1] = Character::OUTERWALLS;
	}

	//entrance and exit
	maze[0][2] = Character::PATH;
	maze[31][29] = Character::PATH;

	//row1
	maze[1][2] = Character::PATH;
	maze[1][10] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[1][15 + i] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[1][25 + i] = Character::PATH;
	//row2
	for (int i = 0; i < 14; i++) maze[2][2 + i] = Character::PATH;
	maze[2][17] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[2][21 + i] = Character::PATH;
	maze[2][25] = Character::PATH;
	maze[2][28] = Character::PATH;
	maze[2][30] = Character::PATH;
	//row3
	maze[3][6] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[3][17 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[3][23 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[3][27 + i] = Character::PATH;
	//row4
	for (int i = 0; i < 2; i++) maze[4][2 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[4][6 + i] = Character::PATH;
	maze[4][12] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[4][19 + i] = Character::PATH;
	//row5
	for (int i = 0; i < 2; i++) maze[5][3 + i] = Character::PATH;
	maze[5][6] = Character::PATH;
	for (int i = 0; i < 10; i++) maze[5][9 + i] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[5][24 + i] = Character::PATH;
	//row6
	maze[6][4] = Character::PATH;
	maze[6][6] = Character::PATH;
	maze[6][9] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[6][18 + i] = Character::PATH;
	maze[6][24] = Character::PATH;
	maze[6][28] = Character::PATH;
	maze[6][30] = Character::PATH;
	//row7
	for (int i = 0; i < 5; i++) maze[7][2 + i] = Character::PATH;
	maze[7][9] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[7][11 + i] = Character::PATH;
	//maze[7][18] = Character::PATH;
	maze[7][21] = Character::PATH;
	maze[7][24] = Character::PATH;
	maze[7][28] = Character::PATH;
	maze[7][30] = Character::PATH;
	//row8
	maze[8][2] = Character::PATH;
	maze[8][9] = Character::PATH;
	maze[8][11] = Character::PATH;
	maze[8][18] = Character::PATH;
	maze[8][19] = Character::PATH;
	maze[8][20] = Character::PATH;
	maze[8][21] = Character::PATH;
	maze[8][24] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[8][26 + i] = Character::PATH;
	maze[8][30] = Character::PATH;
	//row9
	maze[9][2] = Character::PATH;
	for (int i = 0; i < 8; i++) maze[9][4 + i] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[9][14 + i] = Character::PATH;
	maze[9][21] = Character::PATH;
	maze[9][23] = Character::PATH;
	maze[9][24] = Character::PATH;
	maze[9][26] = Character::PATH;
	maze[9][28] = Character::PATH;
	maze[9][30] = Character::PATH;
	//row10
	for (int i = 0; i < 3; i++) maze[10][2 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[10][11 + i] = Character::PATH;
	maze[10][15] = Character::PATH;
	maze[10][21] = Character::PATH;
	maze[10][24] = Character::PATH;
	maze[10][28] = Character::PATH;
	maze[10][30] = Character::PATH;
	//row11
	maze[11][2] = Character::PATH;
	maze[11][5] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[11][8 + i] = Character::PATH;
	maze[11][12] = Character::PATH;
	maze[11][13] = Character::PATH;
	maze[11][15] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[11][18 + i] = Character::PATH;
	maze[11][24] = Character::PATH;
	maze[11][26] = Character::PATH;
	maze[11][28] = Character::PATH;
	//row12
	for (int i = 0; i < 5; i++) maze[12][2 + i] = Character::PATH;
	maze[12][8] = Character::PATH;
	maze[12][10] = Character::PATH;
	maze[12][13] = Character::PATH;
	maze[12][15] = Character::PATH;
	maze[12][18] = Character::PATH;
	maze[12][21] = Character::PATH;
	maze[12][24] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[12][26 + i] = Character::PATH;
	maze[12][30] = Character::PATH;
	//row13
	maze[13][2] = Character::PATH;
	maze[13][6] = Character::PATH;
	maze[13][8] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[13][10 + i] = Character::PATH;
	maze[13][15] = Character::PATH;
	maze[13][24] = Character::PATH;
	maze[13][28] = Character::PATH;
	maze[13][2] = Character::PATH;
	maze[13][6] = Character::PATH;
	maze[13][30] = Character::PATH;
	//row14
	maze[14][2] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[14][4 + i] = Character::PATH;
	maze[14][8] = Character::PATH;
	maze[14][12] = Character::PATH;
	for (int i = 0; i < 13; i++) maze[14][14 + i] = Character::PATH;
	maze[14][28] = Character::PATH;
	maze[14][30] = Character::PATH;
	//row15
	maze[15][8] = Character::PATH;
	maze[15][9] = Character::PATH;
	maze[15][10] = Character::PATH;
	maze[15][12] = Character::PATH;
	maze[15][22] = Character::PATH;
	maze[15][28] = Character::PATH;
	maze[15][30] = Character::PATH;
	//row16
	for (int i = 0; i < 7; i++) maze[16][2 + i] = Character::PATH;
	for (int i = 0; i < 10; i++) maze[16][12 + i] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[16][25 + i] = Character::PATH;
	maze[16][30] = Character::PATH;
	//row17
	maze[17][2] = Character::PATH;
	maze[17][6] = Character::PATH;
	maze[17][17] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[17][21 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[17][28 + i] = Character::PATH;
	//row18
	maze[18][2] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[18][7 + i] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[18][14 + i] = Character::PATH;
	//row19
	for (int i = 0; i < 4; i++) maze[19][2 + i] = Character::PATH;
	maze[19][7] = Character::PATH;
	maze[19][9] = Character::PATH;
	maze[19][11] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[19][20 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[19][25 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[19][28 + i] = Character::PATH;
	//row20
	maze[20][2] = Character::PATH;
	maze[20][5] = Character::PATH;
	maze[20][7] = Character::PATH;
	maze[20][9] = Character::PATH;
	for (int i = 0; i < 8; i++) maze[20][11 + i] = Character::PATH;
	maze[20][20] = Character::PATH;
	maze[20][25] = Character::PATH;
	maze[20][28] = Character::PATH;
	//row21
	maze[21][2] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[21][5 + i] = Character::PATH;
	maze[21][9] = Character::PATH;
	maze[21][11] = Character::PATH;
	maze[21][18] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[21][20 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[21][27 + i] = Character::PATH;
	//row22
	for (int i = 0; i < 3; i++) maze[22][1 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[22][11 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[22][15 + i] = Character::PATH;
	maze[22][18] = Character::PATH;
	maze[22][20] = Character::PATH;
	maze[22][24] = Character::PATH;
	maze[22][27] = Character::PATH;
	maze[22][29] = Character::PATH;
	//row23
	maze[23][1] = Character::PATH;
	maze[23][3] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[23][5 + i] = Character::PATH;
	maze[23][11] = Character::PATH;
	maze[23][13] = Character::PATH;
	maze[23][14] = Character::PATH;
	maze[23][16] = Character::PATH;
	maze[23][20] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[23][22 + i] = Character::PATH;
	maze[23][27] = Character::PATH;
	maze[23][29] = Character::PATH;
	//row24
	maze[24][1] = Character::PATH;
	maze[24][3] = Character::PATH;
	maze[24][5] = Character::PATH;
	maze[24][7] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[24][9 + i] = Character::PATH;
	maze[24][13] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[24][16 + i] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[24][24 + i] = Character::PATH;
	maze[24][29] = Character::PATH;
	//row25
	maze[25][1] = Character::PATH;
	maze[25][3] = Character::PATH;
	maze[25][5] = Character::PATH;
	maze[25][7] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[25][13 + i] = Character::PATH;
	maze[25][29] = Character::PATH;
	//row26
	maze[26][1] = Character::PATH;
	maze[26][3] = Character::PATH;
	maze[26][5] = Character::PATH;
	maze[26][7] = Character::PATH;
	maze[26][9] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[26][11 + i] = Character::PATH;
	maze[26][15] = Character::PATH;
	for (int i = 0; i < 12; i++) maze[26][18 + i] = Character::PATH;
	//row27
	maze[27][1] = Character::PATH;
	maze[27][3] = Character::PATH;
	maze[27][5] = Character::PATH;
	maze[27][7] = Character::PATH;
	maze[27][9] = Character::PATH;
	maze[27][11] = Character::PATH;
	maze[27][15] = Character::PATH;
	maze[27][16] = Character::PATH;
	maze[27][19] = Character::PATH;
	//row28
	maze[28][1] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[28][3 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[28][7 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[28][11 + i] = Character::PATH;
	maze[28][13] = Character::PATH;
	maze[28][15] = Character::PATH;
	for (int i = 0; i < 12; i++) maze[28][18 + i] = Character::PATH;
	//row29
	maze[29][7] = Character::PATH;
	maze[29][11] = Character::PATH;
	maze[29][13] = Character::PATH;
	maze[29][15] = Character::PATH;
	maze[29][16] = Character::PATH;
	maze[29][17] = Character::PATH;
	maze[29][21] = Character::PATH;
	maze[29][24] = Character::PATH;
	maze[29][26] = Character::PATH;
	maze[29][29] = Character::PATH;
	//row30
	for (int i = 0; i < 7; i++) maze[30][1	+ i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[30][9 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[30][14 + i] = Character::PATH;
	maze[30][17
	] = Character::PATH;
	maze[30][21] = Character::PATH;
	maze[30][26] = Character::PATH;
	maze[30][29] = Character::PATH;
	//row 31
	maze[31][29] = 'E';
}

void Maze::mazeDesign_2()
{
	//outer walls
	for (int col = 0; col < MAZEDESIGNSIZE_2; ++col) {
		maze[0][col] = Character::OUTERWALLS;
		maze[33][col] = Character::OUTERWALLS;
	}
	for (int row = 0; row < MAZEDESIGNSIZE_2; ++row) {
		maze[row][0] = Character::OUTERWALLS;
		maze[row][33] = Character::OUTERWALLS;
	}

	//entrance and exit
	maze[29][0] = Character::PATH;
	maze[13][33] = Character::EXIT;
	//row1
	maze[1][1] = Character::PATH;
	maze[1][2] = Character::PATH;
	maze[1][4] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[1][8 + i] = Character::PATH;
	for (int i = 0; i < 17; i++) maze[1][16+ i] = Character::PATH;
	//row2
	maze[2][1] = Character::PATH;
	maze[2][4] = Character::PATH;
	maze[2][6] = Character::PATH;
	maze[2][14] = Character::PATH;
	maze[2][16] = Character::PATH;
	maze[2][27] = Character::PATH;
	maze[2][30] = Character::PATH;
	//row3
	maze[3][1] = Character::PATH;
	maze[3][3] = Character::PATH;
	maze[3][4] = Character::PATH;
	maze[3][6] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[3][8 + i] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[3][14 + i] = Character::PATH;
	maze[3][21] = Character::PATH;
	maze[3][23] = Character::PATH;
	maze[3][27] = Character::PATH;
	maze[3][30] = Character::PATH;
	maze[3][31] = Character::PATH;
	maze[3][32] = Character::PATH;
	//row4
	maze[4][1] = Character::PATH;
	maze[4][3] = Character::PATH;
	maze[4][6] = Character::PATH;
	maze[4][8] = Character::PATH;
	maze[4][12] = Character::PATH;
	maze[4][18] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[4][21 + i] = Character::PATH;
	maze[4][27] = Character::PATH;
	//row5
	for (int i = 0; i < 6; i++) maze[5][1 + i] = Character::PATH;
	maze[5][8] = Character::PATH;
	maze[5][10] = Character::PATH;
	maze[5][12] = Character::PATH;
	maze[5][18] = Character::PATH;
	maze[5][25] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[5][27 + i] = Character::PATH;
	//row6
	maze[6][2] = Character::PATH;
	maze[6][6] = Character::PATH;
	maze[6][8] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[6][10 + i] = Character::PATH;
	for (int i = 0; i < 8; i++) maze[6][18 + i] = Character::PATH;
	maze[6][27] = Character::PATH;
	maze[6][30] = Character::PATH;
	maze[6][32] = Character::PATH;
	//row7
	maze[7][2] = Character::PATH;
	maze[7][8] = Character::PATH;
	maze[7][10] = Character::PATH;
	maze[7][16] = Character::PATH;
	maze[7][23] = Character::PATH;
	maze[7][25] = Character::PATH;
	maze[7][27] = Character::PATH;
	maze[7][30] = Character::PATH;
	maze[7][32] = Character::PATH;
	//row8
	for (int i = 0; i < 5; i++) maze[8][2 + i] = Character::PATH;
	maze[8][10] = Character::PATH;
	maze[8][12] = Character::PATH;
	maze[8][13] = Character::PATH;
	maze[8][16] = Character::PATH;
	maze[8][19] = Character::PATH;
	maze[8][23] = Character::PATH;
	maze[8][25] = Character::PATH;
	maze[8][30] = Character::PATH;
	maze[8][31] = Character::PATH;
	maze[8][32] = Character::PATH;
	//row9
	maze[9][2] = Character::PATH;
	maze[9][6] = Character::PATH;
	maze[9][10] = Character::PATH;
	maze[9][13] = Character::PATH;
	maze[9][16] = Character::PATH;
	maze[9][19] = Character::PATH;
	maze[9][20] = Character::PATH;
	maze[9][21] = Character::PATH;
	maze[9][23] = Character::PATH;
	maze[9][28] = Character::PATH;
	maze[9][30] = Character::PATH;
	maze[9][32] = Character::PATH;
	//row10
	maze[10][2] = Character::PATH;
	for (int i = 0; i < 9; i++) maze[10][6 + i] = Character::PATH;
	maze[10][16] = Character::PATH;
	maze[10][19] = Character::PATH;
	maze[10][21] = Character::PATH;
	maze[10][23] = Character::PATH;
	maze[10][26] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[10][28 + i] = Character::PATH;
	maze[10][32] = Character::PATH;
	//row11
	maze[11][2] = Character::PATH;
	maze[11][5] = Character::PATH;
	maze[11][16] = Character::PATH;
	maze[11][19] = Character::PATH;
	maze[11][23] = Character::PATH;
	maze[11][25] = Character::PATH;
	maze[11][26] = Character::PATH;
	maze[11][28] = Character::PATH;
	//row12
	for (int i = 0; i < 5; i++) maze[12][1 + i] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[12][8 + i] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[12][13 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[12][19 + i] = Character::PATH;
	maze[12][23] = Character::PATH;
	maze[12][25] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[12][28 + i] = Character::PATH;
	//row13
	maze[13][3] = Character::PATH;
	maze[13][8] = Character::PATH;
	maze[13][11] = Character::PATH;
	maze[13][13] = Character::PATH;
	maze[13][19] = Character::PATH;
	maze[13][21] = Character::PATH;
	maze[13][23] = Character::PATH;
	maze[13][25] = Character::PATH;
	maze[13][31] = Character::PATH;
	maze[13][32] = Character::PATH;
	//row14
	maze[14][3] = Character::PATH;
	maze[14][11] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[14][13 + i] = Character::PATH;
	maze[14][21] = Character::PATH;
	maze[14][23] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[14][25 + i] = Character::PATH;
	maze[14][31] = Character::PATH;
	//row15
	for (int i = 0; i < 11; i++) maze[15][1 + i] = Character::PATH;
	maze[15][13] = Character::PATH;
	maze[15][21] = Character::PATH;
	maze[15][23] = Character::PATH;
	maze[15][25] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[15][27 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[15][31 + i] = Character::PATH;
	//row16
	maze[16][11] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[16][15 + i] = Character::PATH;
	maze[16][21] = Character::PATH;
	maze[16][23] = Character::PATH; 
	maze[16][25] = Character::PATH;
	//row17
	maze[17][5] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[17][9 + i] = Character::PATH;
	maze[17][15] = Character::PATH;
	maze[17][18] = Character::PATH;
	maze[17][23] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[17][25 + i] = Character::PATH;
	maze[17][31] = Character::PATH;
	maze[17][32] = Character::PATH;
	//row18
	for (int i = 0; i < 5; i++) maze[18][1 + i] = Character::PATH;
	maze[18][11] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[18][13 + i] = Character::PATH;
	maze[18][18] = Character::PATH;
	maze[18][22] = Character::PATH;
	maze[18][23] = Character::PATH;
	maze[18][25] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[18][29 + i] = Character::PATH;
	//row
	maze[19][1] = Character::PATH;
	maze[19][3] = Character::PATH; 
	for (int i = 0; i < 4; i++) maze[19][5 + i] = Character::PATH;
	maze[19][11] = Character::PATH;
	maze[19][13] = Character::PATH;
	maze[19][15] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[19][17 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[19][23 + i] = Character::PATH;
	maze[19][27] = Character::PATH;
	maze[19][29] = Character::PATH;
	maze[19][31] = Character::PATH;
	//row20
	maze[20][1] = Character::PATH;
	maze[20][3] = Character::PATH;
	maze[20][5] = Character::PATH;
	maze[20][8] = Character::PATH;
	maze[20][11] = Character::PATH;
	maze[20][13] = Character::PATH;
	maze[20][15] = Character::PATH;
	maze[20][21] = Character::PATH;
	maze[20][27] = Character::PATH;
	maze[20][29] = Character::PATH;
	maze[20][31] = Character::PATH;
	//row21
	maze[21][1] = Character::PATH;
	maze[21][5] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[21][8 + i] = Character::PATH;
	maze[21][15] = Character::PATH;
	maze[21][20] = Character::PATH;
	maze[21][21] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[21][23 + i] = Character::PATH;
	maze[21][27] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[21][29 + i] = Character::PATH;
	//row22
	maze[22][5] = Character::PATH;
	maze[22][7] = Character::PATH;
	maze[22][10] = Character::PATH;
	maze[22][12] = Character::PATH;
	maze[22][13] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[22][15 + i] = Character::PATH;
	maze[22][24] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[22][27 + i] = Character::PATH;
	//row23
	maze[23][5] = Character::PATH;
	maze[23][7] = Character::PATH;
	maze[23][2] = Character::PATH;
	maze[23][13] = Character::PATH;
	maze[23][20] = Character::PATH;
	maze[23][22] = Character::PATH;
	maze[23][24] = Character::PATH;
	maze[23][27] = Character::PATH;
	//row24
	maze[24][5] = Character::PATH;
	maze[24][1] = Character::PATH;
	maze[24][2] = Character::PATH;
	for (int i = 0; i < 12; i++) maze[24][7 + i] = Character::PATH;
	maze[24][20] = Character::PATH;
	maze[24][22] = Character::PATH;
	maze[24][24] = Character::PATH;
	maze[24][27] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[24][29 + i] = Character::PATH;
	//row25
	maze[25][1] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[25][5 + i] = Character::PATH;
	maze[25][15] = Character::PATH;
	maze[25][18] = Character::PATH;
	maze[25][20] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[25][22 + i] = Character::PATH;
	maze[25][27] = Character::PATH;
	maze[25][29] = Character::PATH;
	maze[25][31] = Character::PATH;
	//row26
	maze[26][1] = Character::PATH;
	maze[26][5] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[26][9 + i] = Character::PATH;
	maze[26][15] = Character::PATH;
	maze[26][20] = Character::PATH;
	maze[26][23] = Character::PATH;
	maze[26][27] = Character::PATH;
	maze[26][29] = Character::PATH;
	maze[26][31] = Character::PATH;
	//row27
	maze[27][1] = Character::PATH;
	maze[27][2] = Character::PATH;
	maze[27][4] = Character::PATH;
	maze[27][5] = Character::PATH;
	maze[27][9] = Character::PATH;
	maze[27][11] = Character::PATH;
	maze[27][15] = Character::PATH;
	for (int i = 0; i < 7; i++) maze[27][17 + i] = Character::PATH;
	maze[27][25] = Character::PATH;
	maze[27][27] = Character::PATH;
	maze[27][29] = Character::PATH;
	maze[27][31] = Character::PATH;
	//row28
	maze[28][2] = Character::PATH;
	maze[28][7] = Character::PATH;
	maze[28][9] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[28][11 + i] = Character::PATH;
	maze[28][17] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[28][23 + i] = Character::PATH;
	maze[28][27] = Character::PATH;
	maze[28][29] = Character::PATH;
	maze[28][31] = Character::PATH;
	//row29
	for (int i = 0; i < 7; i++) maze[29][1 + i] = Character::PATH;
	maze[29][9] = Character::PATH;
	maze[29][11] = Character::PATH;
	maze[29][17] = Character::PATH;
	maze[29][27] = Character::PATH;
	maze[29][29] = Character::PATH;
	maze[29][31] = Character::PATH;
	//row30
	maze[30][2] = Character::PATH;
	maze[30][4] = Character::PATH;
	maze[30][11] = Character::PATH;
	maze[30][13] = Character::PATH;
	maze[30][14] = Character::PATH;
	maze[30][15] = Character::PATH;
	for (int i = 0; i < 11; i++) maze[30][17 + i] = Character::PATH;
	maze[30][29] = Character::PATH;
	maze[30][31] = Character::PATH;
	maze[30][32] = Character::PATH;
	//row31
	maze[31][1] = Character::PATH;
	maze[31][2] = Character::PATH;
	for (int i = 0; i < 10; i++) maze[31][4 + i] = Character::PATH;
	maze[31][17] = Character::PATH;
	maze[31][29] = Character::PATH;
	//row32
	maze[32][1] = Character::PATH;
	maze[32][7] = Character::PATH;
	for (int i = 0; i < 15; i++) maze[32][16 + i] = Character::PATH;




}

void Maze::mazeDesign_3()
{
	//outer walls
	for (int col = 0; col < MAZEDESIGNSIZE_3; ++col) {
		maze[0][col] = Character::OUTERWALLS;
		maze[MAZEDESIGNSIZE_3-1][col] = Character::OUTERWALLS;
	}
	for (int row = 0; row < MAZEDESIGNSIZE_3; ++row) {
		maze[row][0] = Character::OUTERWALLS;
		maze[row][MAZEDESIGNSIZE_3 - 1] = Character::OUTERWALLS;
	}

	//entrance and exit
	maze[23][3] = Character::PATH;
	maze[23][19] = Character::EXIT;
	//row1
	for (int i = 0; i < 3; i++) maze[1][1 + i] = Character::PATH;
	//row2
	maze[2][1] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[2][3 + i] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[2][9 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[2][16 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[2][20 + i] = Character::PATH;
	//row3
	maze[3][1] = Character::PATH;
	maze[3][7] = Character::PATH;
	maze[3][9] = Character::PATH;
	maze[3][12] = Character::PATH;
	maze[3][14] = Character::PATH;
	maze[3][16] = Character::PATH;
	maze[3][18] = Character::PATH;
	maze[3][20] = Character::PATH;
	//row4
	for (int i = 0; i < 4; i++) maze[4][1 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[4][7 + i] = Character::PATH;
	maze[4][12] = Character::PATH;
	maze[4][14] = Character::PATH;
	maze[4][16] = Character::PATH;
	maze[4][18] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[4][20 + i] = Character::PATH;
	//row5
	maze[5][4] = Character::PATH;
	maze[5][12] = Character::PATH;
	maze[5][14] = Character::PATH;
	maze[5][16] = Character::PATH;
	maze[5][18] = Character::PATH;
	maze[5][20] = Character::PATH;
	//row6
	maze[6][1] = Character::PATH;
	maze[6][4] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[6][6 + i] = Character::PATH;
	for (int i = 0; i < 2; i++) maze[6][11 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[6][14 + i] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[6][18+ i] = Character::PATH;
	//row7
	for (int i = 0; i < 4; i++) maze[7][1 + i] = Character::PATH;
	maze[7][6] = Character::PATH;
	maze[7][9] = Character::PATH;
	maze[7][11] = Character::PATH;
	maze[7][18] = Character::PATH;
	//row8
	maze[8][1] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[8][6 + i] = Character::PATH;
	for (int i = 0; i < 8; i++) maze[8][11 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[8][20 + i] = Character::PATH;
	//row9
	maze[9][1] = Character::PATH;
	maze[9][6] = Character::PATH;
	maze[9][8] = Character::PATH;
	maze[9][11] = Character::PATH;
	maze[9][15] = Character::PATH;
	maze[9][20] = Character::PATH;
	maze[9][22] = Character::PATH;
	//row10
	maze[10][1] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[10][3 + i] = Character::PATH;
	maze[10][8] = Character::PATH;
	maze[10][11] = Character::PATH;
	maze[10][15] = Character::PATH;
	maze[10][16] = Character::PATH;
	maze[10][19] = Character::PATH;
	maze[10][20] = Character::PATH;
	maze[10][22] = Character::PATH;
	//row11
	maze[11][1] = Character::PATH;
	maze[11][3] = Character::PATH;
	maze[11][8] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[11][10 + i] = Character::PATH;
	maze[11][15] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[11][19 + i] = Character::PATH;
	//row12
	maze[12][1] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[12][3 + i] = Character::PATH;
	maze[12][10] = Character::PATH;
	maze[12][12] = Character::PATH;
	maze[12][15] = Character::PATH;
	maze[12][19] = Character::PATH;
	//row13
	maze[13][1] = Character::PATH;
	maze[13][5] = Character::PATH;
	maze[13][8] = Character::PATH;
	for (int i = 0; i < 10; i++) maze[13][10 + i] = Character::PATH;
	//row14
	for (int i = 0; i < 5; i++) maze[14][1 + i] = Character::PATH;
	maze[14][7] = Character::PATH;
	maze[14][8] = Character::PATH;
	maze[14][10] = Character::PATH;
	maze[14][12] = Character::PATH;
	maze[14][18] = Character::PATH;
	//row15
	maze[15][7] = Character::PATH;
	maze[15][18] = Character::PATH;
	//row16
	for (int i = 0; i < 7; i++) maze[16][2 + i] = Character::PATH;
	for (int i = 0; i < 10; i++) maze[16][11 + i] = Character::PATH;
	//row17
	maze[17][2] = Character::PATH;
	maze[17][11] = Character::PATH;
	maze[17][18] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[17][20 + i] = Character::PATH;
	//row18
	for (int i = 0; i < 7; i++) maze[18][2 + i] = Character::PATH;
	maze[18][21] = Character::PATH;
	maze[18][11] = Character::PATH;
	maze[18][18] = Character::PATH;
	//row19
	maze[19][6] = Character::PATH;
	maze[19][8] = Character::PATH;
	maze[19][9] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[19][11 + i] = Character::PATH;
	maze[19][18] = Character::PATH;
	maze[19][21] = Character::PATH;
	//row20
	maze[20][1] = Character::PATH;
	for (int i = 0; i < 5; i++) maze[20][3 + i] = Character::PATH;
	maze[20][9] = Character::PATH;
	maze[20][11] = Character::PATH;
	maze[20][13] = Character::PATH;
	maze[20][16] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[20][18 + i] = Character::PATH;
	//row21
	for (int i = 0; i < 3; i++) maze[21][1 + i] = Character::PATH;
	maze[21][7] = Character::PATH;
	maze[21][9] = Character::PATH;
	maze[21][13] = Character::PATH;
	maze[21][16] = Character::PATH;
	maze[21][21] = Character::PATH;
	//row22
	maze[22][3] = Character::PATH;
	for (int i = 0; i < 6; i++) maze[22][5 + i] = Character::PATH;
	for (int i = 0; i < 3; i++) maze[22][12 + i] = Character::PATH;
	for (int i = 0; i < 4; i++) maze[22][16 + i] = Character::PATH;
}
