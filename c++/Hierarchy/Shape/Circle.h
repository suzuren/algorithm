

#ifndef _CIRCLE_H
#define _CIRCLE_H

class Circle:public Shape
{
protected:
	// �� Circle ���Ϊ���࣬��������ɷ��� radius
	float radius;

public:
	// ����Բ�ģ��뾶����䷽ʽ�����Ĺ��캯��
	Circle(float h=0, float v=0, float r=0, int fill=0);
	
	// ���ʰ뾶�ķ���
	float GetRadius(void)const;
	void  SetRadius(float r);

	// ��Բ�ķ������������� Shape �� Draw
	virtual void Draw(void)const;

	// ��������
//	virtual float Area(void)const;
//	virtual float Perimeter(void)const;

};

#endif

