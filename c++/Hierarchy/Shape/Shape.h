
#ifndef _SHAPE_H
#define _SHAPE_H

// ����㣬��䷽ʽ�����ʺ͸ı���Щ�����Ļ��ࡣ��������������ͼ����̳У�ʵ���˸���
// �Ļ�ͼ��������������ܳ��ĺ���
class Shape
{

protected:
	// ��������Ļ�е�ˮƽ����ֱλ�ã�����������ĸ���������
	float x, y;

	// Ϊ��ͼ�����ṩ����䷽ʽ
	int fillpat;
	
public:

	// ���캯��
	Shape(float h=0, float v=0, int fill=0);

	// ���ʻ���� x �� y ����ķ���
	float GetX(void)const;				// ���� X ����ֵ
	float GetY(void)const;				// ���� Y ����ֵ
	void  SelPoint(float h, float v);	// �ı����

	// ������䷽ʽ�ķ���
	int GetFill(void)const;				// ������䷽ʽ
	int SetFill(int fill);				// �ı���䷽ʽ

	// ���麯������������붨����Ե���������ܳ��ķ���
	virtual float Area(void)const = 0;
	virtual float Perimeter(void)const = 0;

	// ��������� Draw �ڳ�ʼ����䷽ʽʱ���õĴ��麯��
	virtual void  Draw(void) const;
};

#endif

