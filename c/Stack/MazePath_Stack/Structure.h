
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

typedef struct
{
    char arr[MAZE_MAX_SIZE][MAZE_MAX_SIZE];   
}MazeType;

typedef struct
{
    int r;
    int c;
}PosType;

typedef struct
{
	int ord;
	PosType seat;
	int di;
}SElemType;

typedef struct   
{   
    SElemType stack[STACK_MAX_SIZE];
	int  top;
}SqStack;

#endif
