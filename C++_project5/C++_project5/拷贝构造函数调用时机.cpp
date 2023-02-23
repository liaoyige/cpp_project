#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
/*
	C++中拷贝构造函数调用时机通常有三种
 ·使用一个已经创建完毕的对象来初始化一个新的对象
 ·值传递的方式给函数参数传值
 ·以值的方式返回局部对象
*/

class Person
{
public:
	int M_age;
	Person()
	{
		cout << "Person 默认构造函数调用" << endl;
	}

	Person(int age)
	{
		M_age = age;
		cout << "Person 有参构造函数调用" << endl;
		cout << "age = " << M_age << endl;
	}

	Person(const Person &p)
	{
		cout << "Person 拷贝构造函数调用" << endl;
		M_age = p.M_age;
	}

	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};


//1、使用一个已经创建完毕的对象来初始化一个新的对象
void test01()
{
	Person p1(20);
	Person p2(p1);
}


//2、值传递的方式给函数参数传值

void Make(Person &p)
{
	Person p1(p);
}

void test02()
{
	Person p;
	Make(p);

}


//3、以值的方式返回局部对象

Person Make1()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = Make1();
	cout << (int*)&p << endl;
}


int main()
{
	//test01();
	test03();
	system("pause");
	return 0;
}