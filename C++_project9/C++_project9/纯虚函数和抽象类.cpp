#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
	因此可以将虚函数改为纯虚函数，纯虚函数语法如下
	纯虚函数：virtual  返回值类型  函数名 (参数列表) = 0；

  ·当类中有了纯虚函数，这个类也称为抽象类

    抽象类特点：
  ·无法实例化对象
  ·子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/

//纯虚函数和抽象类
class Base
{
public:
	virtual void func() = 0;  //纯虚函数

};

class Son : public Base  //继承父类的子类也叫派生类
{
public:
	virtual void func()
	{
		cout << "重写父类中纯虚函数" << endl;
	}
};

void test01()
{
	//Base B;    ×  抽象类（包含纯虚函数的类）无法实例化对象
	//new Base;  ×  哪怕是使用new在堆区开辟空间，一样报错，无法实例化对象
	Son s;    //除非重写父类纯虚函数，否则子类同样是抽象类，无法实例化对象

	//运用多态技术创建对象的两者方法（回顾）
	Base & B1 = s;      
	Base * B2 = new Son;

	B2->func();
}

int main()
{
	test01();
	system("pause");
	return 0;
}