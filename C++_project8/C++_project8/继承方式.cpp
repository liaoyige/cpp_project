#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
	  继承方式（三种）
	·公共继承
	·保护继承
	·私有继承
*/

//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;
	}
};
void test01()
{
	Son s1;
	s1.m_A = 100;  //此处访问的是Son这个类里面的public属性
//	s1.m_B = 100;  //此处访问的是Son这个类里面的protected中成员
				   //Son中的m_B是保护权限 类外访问不到
}
//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : protected Base2
{
public:
	void func()
	{
		m_A = 100; //父类中公共成员，到子类中变为保护权限
		m_B = 100; //父类中保护成员，到子类中变为保护权限
//		m_C = 100; //父类中的私有成员子类访问不到
	}
};
void test02()
{
	Son1 s1;
	//s1.m_A = 100;   在Son2中 m_A和m_B都变为了保护权限，类外无法访问
	//s1.m_B = 100;	  protected保护权限类内可以访问，类外无法访问
}

int main()
{
	system("pause");
	return 0;
}