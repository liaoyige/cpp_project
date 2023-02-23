#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
/*
	多态使用时，如果子类中有属性开辟到堆区
	则父类指针在释放时无法调用到子类的析构代码
	从而造成堆区中数据造成内存泄露

	例如  void Domake（AbstractBase * abs）
		{
			abs = new BaseSon;
			delete abs;   //这里的delete释放的时候无法调用子类的析构代码
		}			//解决方式：将父类中的析构函数改为虚析构或者纯虚析构
	
	  虚析构函数  ：virtual ~类名（）;
	  纯虚析构函数：virtual ~类名（） =  0;
	  
	  TIPS：
	·纯虚析构函数需要类内声明，类外实现才行。否则会报错。
	·虚析构和纯虚析构函数只能存在一个

	  虚析构和纯虚析构共性：
	·可以解决父类指针释放子类对象问题
	·都需要有具体函数实现

	  虚析构和纯虚析构区别：
	·如果是纯虚析构，该类属于抽象类，无法实例化对象
*/

class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}
    //利用虚析构函数解决父类指针释放子类对象不干净的问题
	virtual ~Animal()  
	{
		cout << "Animal的析构函数调用" << endl;
	}


	virtual void speak() = 0; //纯虚函数
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name); //new string  返回的是string类型的指针，
						  //所以我们需要用 string * m_Name进行接收
	}
	virtual void speak();
	string * m_Name;//  string   m_Name  是创建在栈区的string类型变量
					//  string * m_Name  是创建指针，数据存放在堆区中
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void Cat::speak()
{
	cout << * m_Name <<"小猫在说话" << endl;
}

void test01()
{
	//Cat c;
	//Animal * cat = new Cat; 注意了，这两句代码指向的地址是一样的，不信自己试试
	//Animal & cat = c;       也就是  Animal * cat = Cat c   即  cat = c

	Animal * cat = new Cat("Tom");
	cat->speak();
	//父类指针在析构的时候，不会调用子类中的析构函数，导致子类中堆区属性出现内存泄露情况
	delete cat;
}

int main()
{
	test01();
	system("pause");
	return 0;
}