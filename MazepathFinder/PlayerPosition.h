#ifndef PLAYERPOSITION_H
#define PLAYERPOSITION_H
class PlayerPosition
{
private:
	int row;
	int col;
public:
	PlayerPosition() { row = 0; col = 0; }
	void setRow(int row) { this->row = row; }
	void setCol(int col) { this->col = col; }
	int getRow() { return row; }
	int getCol() { return col; }
	
	friend bool operator ==(const PlayerPosition& p1, const PlayerPosition& p2);
	friend bool operator !=(const PlayerPosition& p1, const PlayerPosition& p2);
};


#endif
