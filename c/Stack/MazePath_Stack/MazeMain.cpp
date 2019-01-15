
#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

//#define SElemType int
#define Status	  int



#define STACK_MAX_SIZE 33

#define MAZE_MAX_SIZE  10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structure.h"

#include "initstack.h"
#include "stackempty.h"
#include "push.h"
#include "pop.h"

#include "Pass.h"
#include "MarkPrint.h"
#include "FootPrint.h"
#include "NextPos.h"
#include "MazePath.h"
#include "layout_maze.h"
#include "s_maze.h"
#include "mazetravel.h"

//Status MazePath(MazeType & maze, PosType start, PosType end)

int main()
{

	srand( (unsigned)time(NULL) );

	printf("\n");

	MazeType maze;
	PosType start;
	PosType end;
	start.c = start.r = OK;
	end.c = end.r = ERROR;	

	S_Maze(maze);
	MazeTravel(maze);

	int judge = MazePath(maze,start,end);

	printf("\n");
	return OK;
}