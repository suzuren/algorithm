
#include "stdafx.h"

// 构造函数，参数 h 和 v 初始化类 Shape 中的基点。点 (h, v) 表示圆心。参数 fill 初始化类
// Shape 的填充方式只有 r 是专门为类 Circle 用到的参数。类 Shape 中的基对象由初始化表中
// 的构造函数 Shape(h, v, fill) 初始化

Circle::Circle(float h, float v, float r, int fill)
{}

void Circle::Draw(void)const
{
	Shape::Draw(); // 设置填充方式
//	::Ellipse(
}

