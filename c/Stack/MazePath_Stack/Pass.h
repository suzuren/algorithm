
#ifndef _PASS_H
#define _PASS_H

Status Pass(MazeType MyMaze, PosType CurPos)
{
	if (MyMaze.arr[CurPos.r][CurPos.c] == ' ')
		return TRUE;  // �����ǰλ���ǿ���ͨ��������1
	else
		return FALSE; // �����������0
}

#endif