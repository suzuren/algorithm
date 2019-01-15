
#ifndef _MAZEPATH_H
#define _MAZEPATH_H

//Status Pass(MazeType MyMaze, PosType CurPos);
//void FootPrint(MazeType & MyMaze, PosType CurPos);
//void MarkPrint(MazeType & MyMaze, PosType CurPos);
//PosType NextPos(PosType CurPos, int Dir);

Status MazePath(MazeType & maze, PosType start, PosType end)
{
	// �㷨3.3
	// ���Թ�maze�д���� start������ end��ͨ���������һ�������ջ��
	// ����ջ�׵�ջ������������TRUE�����򷵻� FALSE

	SqStack S;
	PosType curpos;
	int curstep;
	SElemType e;
	
	InitStack(S);
	curpos = start; // �趨"��ǰλ��"Ϊ"���λ��"
	curstep = 1; // ̽����һ��

	do{
		if (Pass(maze, curpos))
		{ // ��ǰλ�ÿ�ͨ��������δ���ߵ�����ͨ����
			FootPrint(maze, curpos); // �����㼣
			e.di = 1;
			e.ord = curstep;
			e.seat = curpos;
			Push(S, e); // ����·��
			if (curpos.r == end.r && curpos.c == end.c)
				return (TRUE); // �����յ㣨���ڣ�
			curpos = NextPos(curpos, 1); // ��һλ���ǵ�ǰλ�õĶ���
			curstep++; // ̽����һ��
		}
		else
		{ // ��ǰλ�ò���ͨ��
			if (!StackEmpty(S))
			{
				Pop(S, e);
				while (e.di == 4 && !StackEmpty(S))
				{
					MarkPrint(maze, e.seat);
					Pop(S, e); // ���²���ͨ���ı�ǣ����˻�һ��
				} // while
				if (e.di < 4)
				{
					e.di++;
					Push(S, e); // ����һ������̽��
					curpos = NextPos(e.seat, e.di); // ��ǰλ����Ϊ�·�������ڿ�
				} // if
			} // if
		} // else
	} while (!StackEmpty(S));
	return FALSE;
} // MazePath

#endif