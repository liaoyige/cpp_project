#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using  namespace std;

/*
	构造函数的分类及调用
 ·1、两种分类方式：
		按参数分为：有参构造和无参构造
		按类型分为：普通构造和拷贝构造
 ·2、三种调用方式：
		括号法
		显示法
		隐式转换法

*/

class Person
{
public:
	
	//1、构造函数
	Person()
	{
		cout << "Person 类的无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person 类的有参构造函数" << endl;
	}
	/*
	 2、拷贝构造函数

	一个类可以创造很多对象比如：Person p1,p2.......  那么拷贝构造函数
	是将同一类里面的不同对象的特性拷贝到当前对象下面。
	如：张三19岁，是人类
		李四26岁，是人类，
		拷贝构造函数如传入李四的年纪，就是将李四的年纪拷贝到张三的年纪中，
		此时的张三就是26岁了。而且会自主调用。
	
	*/

	Person( const Person &p)
	{
		cout << "Person 类的拷贝函数" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "Person 类的析构函数" << endl;
	}
	int age;
};

//调用

void test01()
{
	//1、括号法
	Person p1;         //调用默认构造函数
	Person p2(10);     //调用有参构造函数
	Person p3(p2);     //调用拷贝构造函数
	//cout << "p2的年龄:" << p2.age << endl;
	//cout << "p3的年龄:" << p3.age << endl;

	//Tips：调用默认构造函数时候，不要加( ),
	//因为编译器会认为是一个函数的声明，如下
	Person p1();    //编译器认为是一个p1函数，返回值是Person类 形式
					//不会调用任何构造函数，对象都不会创建。

	//从语法的角度来说，一个函数内声明另外一个函数是允许的，不存在问题

	//2、显示法
	Person p1;				 //调用默认构造函数
	Person p2 = Person(10);  //调用有参构造函数
	Person p3 = Person(p2);  //调用拷贝构造函数

	Person(10);	//匿名对象   特点：当前行执行结束后，系统会立即回收匿名对象。
	//Tips:不要利用拷贝构造函数初始化匿名对象。Person(10) = Person(p1);
	
	//3、隐式转换法
	Person p4 = 10;   // 相当于隐藏了Person(10)  有参构造法
	Person p5 = p2;	  // 调用拷贝构造函数
}

int main()
{
	test01();
	system("pause");
	return 0;
}