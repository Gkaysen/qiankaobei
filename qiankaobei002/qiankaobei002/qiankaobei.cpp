// qiankaobei.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CTestCopy
{
	int *x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a,int b);
	CTestCopy(CTestCopy & om);
	void setXY(int a,int b);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{
	x = new int;
	*x = 0;
	y = 0;
	cout << "默认构造函数 x=" << *x << "y=" << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "析构函数 x=" << *x << "y=" << y << endl;
}
CTestCopy::CTestCopy(int a,int b)
{
	x = a;
	y = b;
	cout << "构造函数 x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x;
	y = om.y;
	cout << "复制构造函数 *x=" << x << "y= << endl;
}

void CTestCopy::setX(int a)
{
	*x = a;
	y = b;
}
void CTestCopy::disPlay()
{
	cout<< "display  x="<< *x << "y="<< y  << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600);
	om.disPlay();
	return om;
}
int testtemp(int x)
{
	return x * 2;
}
int main()
{
	CTestCopy ot;
	ot.disPlay();
	ot = myTest;
	ot.display();
	return 0;
}
