#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*
	Tips：程序没有运行之前的内存区是代码区和全局区
		  程序运行后的内存区域是栈区和堆区

	静态成员：在成员变量和成员函数前加上关键字static
  ·静态成员变量
		所有对象共享一份数据		（一个对象该，全部改）
		在编译阶段分配内存			（程序没有运行之前进行分配内存，分配到全局区）
		类内声明，类外初始化
  ·静态成员函数
		所有对象共享同一个函数
		静态成员函数只能访问静态成员变量
*/

class Person
{
public:
	//1、所有对象都共享同一份数据
	//2、编译阶段就分配内存
	//3、类内声明，类外初始化
	static int m_A;
};

 int Person::m_A = 100; //  person::m_A表示类Person中的成员m_A;   （类::成员）
						
void test01()
{
	Person p;
	cout << p.m_A << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}