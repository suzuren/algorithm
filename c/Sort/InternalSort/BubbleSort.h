

#ifndef _BUBBLESORT_H
#define _BUBBLESORT_H

Status BubbleSort(SqList & L)
{
	bool exchange = true;
	int k = L.length-1;
	while(exchange == true)
	{
		exchange = false;
		for(int i=1; i<=k; i++)
		{
			if(L.r[i].key > L.r[i+1].key)
			{
				L.r[0]   = L.r[i];
				L.r[i]   = L.r[i+1];
				L.r[i+1] = L.r[0];
				exchange = true;
			}
		}
		k = k-1;
	}
	return OK;
}

#endif


