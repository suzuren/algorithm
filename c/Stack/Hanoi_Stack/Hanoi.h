
void hanoi (int n, char x, char y, char z) { // �㷨3.5
	// ������x�ϰ�ֱ����С���������϶��±��Ϊ1��n��n��Բ�̰�����ᵽ
	// ����z�ϣ�y����������������
	// �ᶯ���� move (x, n, z) �ɶ���Ϊ��
	//   (c�ǳ�ֵΪ0��ȫ�ֱ������԰ᶯ����)
	//   printf("%i. Move disk %i from  %c  to  %c\n", ++c, n, x, z);
	if (n == 1)
	{
		move(x, 1, z); //�����Ϊ����Բ�̴�x�Ƶ�z
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, n, z); //�����Ϊn��Բ�̴�x�Ƶ�z
		hanoi(n - 1, y, x, z); //��y�ϱ��Ϊ����n-1��Բ���Ƶ�z,x��������
	}
}
