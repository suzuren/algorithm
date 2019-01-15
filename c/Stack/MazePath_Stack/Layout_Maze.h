#ifndef _LAYOUT_MAZE_H
#define _LAYOUT_MAZE_H

Status LayoutMaze(MazeType & maze)
{
//	line_barrier = rand()%10;
//	row_barrier  = rand()%10;
//	while(line_barrier != ERROR || row_barrier != ERROR)
//	{
//		maze.arr[line_barrier-1][row_barrier-1] = '$';
//		line_barrier = rand()%10;
//		row_barrier  = rand()%10;
//	}

	maze.arr[1][3]  = '#';
	maze.arr[1][7]  = '#';

	maze.arr[2][3]  = '#';
	maze.arr[2][7]  = '#';

	maze.arr[3][5]  = '#';
	maze.arr[3][6]  = '#';

	maze.arr[4][2]  = '#';
	maze.arr[4][3]  = '#';
	maze.arr[4][4]  = '#';

	maze.arr[5][4]  = '#';

	maze.arr[6][2]  = '#';
	maze.arr[6][6]  = '#';

	maze.arr[7][2]  = '#';
	maze.arr[7][3]  = '#';
	maze.arr[7][4]  = '#';
	maze.arr[7][6]  = '#';
	maze.arr[7][7]  = '#';

	maze.arr[8][1]  = '#';

	for(int l=0,r=0; l<MAZE_MAX_SIZE,r<MAZE_MAX_SIZE; l++,r++)
	{
		maze.arr[l][0] = '#';
		maze.arr[l][9] = '#';
		maze.arr[0][r]  = '#';
		maze.arr[9][r]  = '#';
	}
	return OK;
}

#endif