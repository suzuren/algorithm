//
//#ifndef _RADIXSORT_H
//#define _RADIXSORT_H
//
//void Distribute(SLList & L, int i, ArrType & f, ArrType & e)
//{
//	// 算法10.15
//	// 静态链表L的r域中记录已按(keys[0],...,keys[i-1])有序，
//	// 本算法按第i个关键字keys[i]建立RADIX个子表，
//	// 使同一子表中记录的keys[i]相同。f[0..RADIX-1]和e[0..RADIX-1]
//	// 分别指向各子表中第一个和最后一个记录。
//	int j, p;
//	for (j = 0; j < RADIX; ++j)
//	{
//		f[j] = 0; // 各子表初始化为空表
//	}
//	for (p = L.r[0].next; p; p = L.r[p].next)
//	{
//		j = L.r[p].keys[i] - '0'; // 将记录中第i个关键字映射到[0..RADIX-1]，
//		if (!f[j])
//		{
//			f[j] = p;
//		}
//		else
//		{
//			L.r[e[j]].next = p;
//		}
//		e[j] = p; // 将p所指的结点插入第j个子表中
//	}
//} // Distribute
//
//void Collect(SLList & L, int i, ArrType f, ArrType e)
//{ // 算法10.16
//	// 本算法按keys[i]自小至大地将f[0..RADIX-1]所指各子表依次链接成
//	// 一个链表，e[0..RADIX-1]为各子表的尾指针
//	int j, t;
//	for (j = 0; !f[j]; j++); // 找第一个非空子表，succ为求后继函数: ++
//	L.r[0].next = f[j]; // L.r[0].next指向第一个非空子表中第一个结点
//	t = e[j];
//	while (j < RADIX)
//	{
//		for (j = j + 1; j < RADIX && !f[j]; j++); // 找下一个非空子表
//		if (j < RADIX) // 链接两个非空子表
//		{
//			L.r[t].next = f[j];
//			t = e[j];
//		}
//	}
//	L.r[t].next = 0; // t指向最后一个非空子表中的最后一个结点
//} // Collect
//
//Status RadixSort(SLList & L)
//{ // 算法10.17
//	// L是采用静态链表表示的顺序表。
//	// 对L作基数排序，使得L成为按关键字自小到大的有序静态链表，
//	// L.r[0]为头结点。
//	int i;
//	ArrType f, e;
//	for (i = 1; i < L.recnum; ++i) L.r[i - 1].next = i;
//	L.r[L.recnum].next = 0; // 将L改造为静态链表
//	for (i = 0; i < L.keynum; ++i)
//	{
//		// 按最低位优先依次对各关键字进行分配和收集
//		Distribute(L, i, f, e); // 第i趟分配
//		Collect(L, i, f, e); // 第i趟收集
//		print_SLList2(L, i);
//	}
//	return OK;
//} // RadixSort
//
//#endif
//
//
