
Status Maze()
{
	MazeType maze;

	int line = MAZE_MAX_SIZE;
	int row  = MAZE_MAX_SIZE;
	int line_barrier = ERROR;
	int row_barrier  = ERROR;
	int entrymaze    = ERROR;
	
	printf("\n");
	printf("�Թ���СΪ %d*%d.\n",line,row);

	for(int i=0; i<line; i++)
	{
		for(int j=0; j<row; j++)
		{
			maze.arr[i][j] = ' ';
		}
	}
	
	printf("\n");
	printf("�����Թ� ...\n");
	printf("�ϰ�λ��\n");

	line_barrier = rand()%10;
	row_barrier  = rand()%10;
	while(line_barrier!=ERROR || row_barrier != ERROR)
	{
		maze1.arr[line_barrier - 1][row_barrier - 1] = '$';
		line_barrier = rand()%10;
		row_barrier  = rand()%10;
	}

	
	printf("");
	return OK;
}