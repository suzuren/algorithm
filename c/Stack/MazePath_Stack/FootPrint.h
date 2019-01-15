
#ifndef _FOOTPRINT_H
#define _FOOTPRINT_H

Status FootPrint(MazeType & MyMaze, PosType CurPos)
{
	MyMaze.arr[CurPos.r][CurPos.c] = '*';
	return OK;
}

#endif