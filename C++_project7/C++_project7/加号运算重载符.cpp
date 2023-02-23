#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	运算重载符号
	定义：对已有的运算符号进行重新定义，赋予其另一种功能，以适应不同的数据类型
*/

class Person
{
public:
	int  m_A;
	int  m_B;

	Person operator+(Person &p);

public:

};

void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	Person p3 = p1 + p2;
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

}

Person Person::operator+(Person &p)
{
	Person temp;
	temp.m_A = this->m_A + p.m_A;
	temp.m_B = this->m_B + p.m_B;
	return temp;
}


//这里重写+号就可以使得类加上一个整形

//Person Person::operator+(Person &p,int num)
//{
//	Person temp;
//	temp.m_A = this->m_A + num;
//	temp.m_B = this->m_B + num;
//	return temp;
//}

 //Person P4 = p1 + 100;




int main()
{
	test01();
	system("pause");
	return 0;
}