
#ifndef _PASS_H
#define _PASS_H

Status Pass(MazeType MyMaze, PosType CurPos)
{
	if (MyMaze.arr[CurPos.r][CurPos.c] == ' ')
		return TRUE;  // 如果当前位置是可以通过，返回1
	else
		return FALSE; // 其它情况返回0
}

#endif