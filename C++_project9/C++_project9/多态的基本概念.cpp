#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	多态的基本概念（类和对象三大特性：封装，继承，多态）

    多态分为两类
  ·静态多态：函数重载和运算符重载属于静态多态，复用函数名
  ·动态多态：派生类和虚函数实现运行时多态

    静态多态和动态多态的区别：
  ·静态多态的函数地址早绑定 - 编译阶段确定函数地址
  ·动态多态的函数地址晚绑定 - 运行阶段确定函数地址

  动态多态的满足条件
  1、有继承关系
  2、子类要重写父类的虚函数   重载：函数名相同，传入参数不同
							  重写：函数名，返回类型，传入参数完全一样，一个虚函数virtual（父类）被实函数（子类）重写
  动态多态的使用
  父类的指针或者引用指向子类对象
*/

class Animal
{
public:
	//虚函数： 关键字 virtual
	virtual void speak()  //加入了virtual关键字 类的内部就出现了一个指针
	{					  //TIPS:每个指针都占4个字节
		cout << "动物都在说话" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()  
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//地址早绑定  在编译阶段就确定函数地址
//如果想让猫说话，函数地址就要晚绑定
void DoSpeak(Animal &animal)//Animal & animal =  cat  相当于cat对象起了一个别名animal传入到函数中
{							//父类的引用指向子类对象
	//C++中父类和子类可以进行转换，子类转换为父类对象传入
	animal.speak();
}

void test01()
{
	Cat cat;
	DoSpeak(cat);
	Dog dog;
	DoSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}