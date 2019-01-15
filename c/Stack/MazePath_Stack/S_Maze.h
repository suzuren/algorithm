
#ifndef _S_MAZE_H
#define _S_MAZE_H

Status S_Maze(MazeType & maze)
{
	int line = MAZE_MAX_SIZE;
	int row  = MAZE_MAX_SIZE;

	int line_barrier = ERROR;
	int row_barrier  = ERROR;

	printf("\t迷宫大小为 %d*%d.\n",line,row);
	for(int i=0; i<line; i++)
	{
		for(int j=0; j<row; j++)
		{
			maze.arr[i][j] = ' ';
		}
	}
	printf("\t布置迷宫 ...\n");
	printf("\t正在导入障碍位置...\n");
	int judge = LayoutMaze(maze);
	if(judge == OK)
		printf("\t迷宫已建成 ... \n");

	return OK;
}

#endif