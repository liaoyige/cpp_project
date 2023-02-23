#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//继承中的同名静态成员处理方式

class Base
{
public:
	static int m_A;
};

int Base::m_A = 100;

class Son:public Base
{
public:
	static int m_A;
};
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
	//1、通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son  下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	//2、通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "Son  下 m_A = " << Son::m_A << endl;
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
}
//同名静态成员函数(同理)
void test02()
{

}

int main()
{
	test01();
	system("pause");
	return 0;
}