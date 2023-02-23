#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	深拷贝与浅拷贝问题
  浅拷贝：简单的赋值拷贝操作。（例如编译器中提供的拷贝操作）
  深拷贝：在堆区重新申请空间，进行拷贝操作。

  Tips:在进行堆区释放空间管理的时候，一定要自己写拷贝函数
	  避免浅拷贝带来的问题，使用深拷贝解决。
*/

class Person
{
public:
	int M_age;
	int * M_height;
	Person()
	{
		cout << "Person 的默认构造函数调用" << endl;
	}
	Person(int age,int height)
	{
		M_age = age;
		M_height = new int(height);		//堆区的数据手动开辟。手动释放，
										//即需要在对象被销毁前被释放。
		cout << "Person 的有参构造函数调用" << endl;
	}

	//浅拷贝导致地址提前释放，非法操作，所以需要使用深拷贝
	Person(const Person &p)
	{
		cout << "拷贝构造函数的调用" << endl;
		M_age = p.M_age;
		//M_height = p.M_height;  编译器默认实现就是这行代码
		//深拷贝实现方法
		M_height = new int(*p.M_height);
	}

	~Person()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (M_height != NULL)
		{
			delete M_height;
			M_height = NULL;
		}
		cout << "Person 的析构函数调用" << endl;
	}
};

void test01()
{
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.M_age << endl;
	cout << "p1的身高为：" << *p1.M_height << endl;
	Person p2(p1);    //编译器做的浅拷贝操作
	cout << "p2的年龄为：" << p2.M_age << endl;
	cout << "p2的身高为：" << *p2.M_height << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}