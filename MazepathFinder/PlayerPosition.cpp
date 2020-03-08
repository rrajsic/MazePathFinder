#include "PlayerPosition.h"
bool operator ==(const PlayerPosition& p1, const PlayerPosition& p2)
{
	return (p1.col == p2.col && p1.row == p2.row);
}
bool operator !=(const PlayerPosition& p1, const PlayerPosition& p2)
{
	return !(p1 == p2);
}