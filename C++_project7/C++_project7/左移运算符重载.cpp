#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	左移运算符重载
*/

class Person
{
public:
	//利用成员函数重载 左移运算符
	void operator << (Person &p);


	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout,Person &p)//本质 operator << (cout , p) 简化 cout << p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

void Person::operator<<(Person &p)
{

}

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;

    cout << p <<endl;
	cout << "p.m_A=" << p.m_A << endl;
	cout << "p.m_B=" << p.m_B << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}