

#include "stdafx.h"

int main(int argc, char argv[])
{
	ifstream fin;
	int item;
	TQueue<int> Q;
	
	fin.open("pq.dat", ios::in | ios::nocreate | ios::binary);
	// ios::in：　　 文件以输入方式打开
	// ios::nocreate 不建立文件，所以文件不存在时打开失败
	if (!fin)
	{
		cerr << "File 'pq.dat' cannot be opened." << endl;
		exit(1);
	}
	
	// read the 20 double values from 'pq.dat' and insert
	// each into Q
	for (int i = 0; i < 20; i++)
	{
		fin >> item;
		Q.QInsert(item);
	}
	cout << endl;
	
	// test the method QPrint
	Q.QPrint();

	cout << endl;

	Q.QDelete();
	
	return 0;
}

