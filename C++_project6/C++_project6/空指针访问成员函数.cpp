#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:
	void ShowClassName()
	{
		cout << "this is Person class" << endl;
	}

	void ShowPersonAge()
	{
		//假如使用空指针调用,this则变为空指针，类内的属性无法调用。
		//即：空指针可以访问成员函数，无法访问成员变量。成员函数不属于类上对象
		//修改办法
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->My_Age << endl;
	}
	int My_Age;

};

void test01()
{
	Person * p = NULL; //这里创建了一个类的指针，赋予NULL，创建了对象吗？有没有实例化对象？

	p->ShowClassName();

	p->ShowPersonAge();
}


int main()
{
	test01();
	system("pause");
	return 0;
}