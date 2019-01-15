
#ifndef _SHAPE_H
#define _SHAPE_H

// 定义点，填充方式及访问和改变这些参数的基类。该类由其他几何图形类继承，实现了各自
// 的画图函数、求面积及周长的函数
class Shape
{

protected:
	// 基点在屏幕中的水平及垂直位置，用于派生类的各个方法中
	float x, y;

	// 为画图函数提供的填充方式
	int fillpat;
	
public:

	// 构造函数
	Shape(float h=0, float v=0, int fill=0);

	// 访问基点的 x 和 y 坐标的方法
	float GetX(void)const;				// 返回 X 坐标值
	float GetY(void)const;				// 返回 Y 坐标值
	void  SelPoint(float h, float v);	// 改变基点

	// 访问填充方式的方法
	int GetFill(void)const;				// 返回填充方式
	int SetFill(int fill);				// 改变填充方式

	// 纯虚函数，派生类必须定义各自的求面积和周长的方法
	virtual float Area(void)const = 0;
	virtual float Perimeter(void)const = 0;

	// 供派生类的 Draw 在初始化填充方式时调用的纯虚函数
	virtual void  Draw(void) const;
};

#endif

