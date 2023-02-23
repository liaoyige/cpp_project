#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//继承中同名成员处理

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()函数调用" << endl;
	}

	//这里重新复习一下重载的概念
	/*
		重载运算符：
		Person p3 = p2 + p1;
		Person p3 = p2.operator+(p1);  (两者等价)

		重载也就是省略函数名字的函数调用，在成员函数中
		例如void func(int a)   重载调用就是只剩括号和参数
	  ·Person p1(10);
	  ·Person p1.func(10);    （两者等价）
	*/
	void func(int a)
	{
		cout << "Base - func(int a)函数调用 返回 " << a << endl;
	}
	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son - func()函数调用" << endl;
	}

	int m_A;
};

//同名成员属性的处理方式
void test01()
{
	Son s;
	// 如果出现同名，则访问的成员就是子类自身的成员而不是继承的基类成员。
	cout << "Son  下 m_A = " << s.m_A << endl; // 访问同名子类自身成员  
	cout << "Base 下 m_A = " << s.Base::m_A << endl;//访问同名继承成员  
}									  

//同名成员函数的处理方式
void test02()
{
	Son s;
	s.func();      //调用子类中的同名成员函数
	s.Base::func();//调用父类中的同名成员函数
//Tips:如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	 //如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base::func(100);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}