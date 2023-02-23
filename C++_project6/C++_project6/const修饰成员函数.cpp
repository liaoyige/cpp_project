#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
 常函数：
  ·成员函数后加const后我们称为这个函数为常含数
  ·常含数内不可以修改成员属性
  ·成员属性声明时加关键字mutable后，在常含数中依然可以修改
 常对象：
  ·声明对象前加const称该对象为常对象
  ·常对象只能调用常含数
*/

//常函数
class Person
{
public:
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	//即：const  Person * const this
	//this = 类名 * const this
	//const this = const  Person * const this
	void ShowPerson()  const
	{
	  //this = NULL;   this指针的本质为指针常量 指针的指向是不可以被修改的
		this->MY_Name = 100;
	}

	void func()
	{
		cout << "NULL" << endl;
	}
	int MY_Name_0;
	mutable int MY_Name; //除非前面加上关键字mutable才能在const中修改这个数值
};

void  test01()
{
	Person p;
	p.ShowPerson();
}


//常对象（不允许修改属性）

void test02()
{
	const Person p1;//在对象前加const，变为常对象
	//p1.MY_Name_0 = 100;  ×
	//p1.MY_Name = 100;    √ 对比两句话，只要成员属性加了mutable就可以修改const变量数值
	//p1.ShowPerson();	   √
	//p1.func();		   × 常对象只能调用常函数，普通函数可以修改属性
}



int main()
{
	test01();
	system("pause");
	return 0;
}