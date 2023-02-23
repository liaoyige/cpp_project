#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
	初始化列表：主要用来初始化属性
	语法：构造函数（）：属性1（值1），属性2（值2）...{ }
*/

class Person  
{
public:

	//传统初始化操作
	Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}

	//初始化列表初始化属性
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	//Person p1(1, 2, 3);
	Person P(30,20,10);
	cout << "m_A = " << P.m_A << endl;
	cout << "m_B = " << P.m_B << endl;
	cout << "m_C = " << P.m_C << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}