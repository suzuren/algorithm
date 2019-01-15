

#ifndef _CIRCLE_H
#define _CIRCLE_H

class Circle:public Shape
{
protected:
	// 若 Circle 类成为基类，其派生类可访问 radius
	float radius;

public:
	// 带有圆心，半径及填充方式参数的构造函数
	Circle(float h=0, float v=0, float r=0, int fill=0);
	
	// 访问半径的方法
	float GetRadius(void)const;
	void  SetRadius(float r);

	// 画圆的方法，调用了类 Shape 的 Draw
	virtual void Draw(void)const;

	// 计量方法
//	virtual float Area(void)const;
//	virtual float Perimeter(void)const;

};

#endif

