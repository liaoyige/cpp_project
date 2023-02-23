#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	 this指针的概念
   ·this指针指向被调用的成员函数所属的对象
   ·this指针是隐藏每一个非静态成员函数内的一种指针
   ·this指针不需要定义，直接使用即可

     this指针的用途
   ·当形参和成员变量同名时，可用this指针来区分
   ·在类的非静态成员函数中返回对象本身，可使用 return * this
  
*/

class Person
{
public:
	Person(int age)
	{
		//这里的this指针指向的有参构造函数所属的对象，下面的成员
		//也就是p1对象下面的age属性。
		this->age = age;
	}
	//1、这里必须使用引用符号& 因为要保证返回的是原来那个对象   
	Person & Person_Add_Age(Person &p) //返回对象地址指针，也就是对象p2！
	{
		this->age += p.age;				    //√
		return *this;
	}
	//2、若使用下面方法，每次都会创建一个新的地址存放返回值，链式编程实际上也就调用了两次
	Person  Person_Add_Age_1(Person &p)//返回对象的值，返回的是p2中的数值！
	{
		this->age += p.age;					//×
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

void test02()
{
	Person p2(10);
	Person p3(10);

	//链式编程思想
	p3.Person_Add_Age(p2).Person_Add_Age(p2).Person_Add_Age(p2);
	cout << "p3的年龄为：" << p3.age << endl;
}
//1、解决名称冲突

//2、返回对象本身用 *this

int main()
{
	test02();
	system("pause");
	return 0;
}