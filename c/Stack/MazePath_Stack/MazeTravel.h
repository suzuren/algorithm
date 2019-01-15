
#ifndef _MAZETRAVEL_H
#define _MAZETRAVEL_H

Status MazeTravel(MazeType maze)
{
//	printf("\n");
	for(int line=0; line<MAZE_MAX_SIZE; line++)
	{
		printf("\t");
		for(int row=0; row<MAZE_MAX_SIZE; row++)
		{
			printf("%c ",maze.arr[line][row]);
		}
		printf("\n");
	}
	return OK;
}

#endif