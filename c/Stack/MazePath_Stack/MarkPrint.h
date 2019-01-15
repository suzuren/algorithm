
#ifndef _MARKPRINT_H
#define _MARKPRINT_H

void MarkPrint(MazeType & MyMaze, PosType CurPos)
{
	MyMaze.arr[CurPos.r][CurPos.c] = '!';
}

#endif