#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
/*
	类和对象(C++面向对象的三大特性：封装，继承，多态)
	Tips：Struct和class差不多，类就是一个结构体但是，权限有区别
	struct 默认权限为公共
	class  默认权限为私有
	即：
	class   C1{int A; // 默认权限为私有权限};
	struct  C1{int A; // 默认权限为共有权限};

  封装一：
	在设计类的时候，属性和行为写在一起，表现事物
	语法： class  类名 { 访问权限： 属性 / 行为};
	例如：设计一个⚪类，求⚪的周长
	圆求周长的公式：2 * PI * 半径

const double PI = 3.14;
class Circle
{
	//行为的public
public:							

	double calculate_distance()
	{
		return 2 * PI * m_r;
	}

	//属性的public
public:

};
	封装二：
   访问权限有三种
   公共权限：public			成员 类内可以访问，类外可以访问
   保护权限：protected		成员 类内可以访问，类外不可以访问
   私有权限：private		成员 类内可以访问，类外不可以访问
   protected  和 private  访问权限主要区分在继承关系上，继承主要区分为
   父子关系，如果是protected权限，父亲中的一些protected权限，子类也可以访问
   如果是private权限子类就没法访问。


*/

//class Person
//{
//public:				//类内
//	//公共权限
//	string m_Name; //姓名
//
//protected:
//	//保护权限
//	string m_Car; //汽车
//
//private:
//	//私有权限
//	int m_Password;//银行卡密码
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//
//};


//class Student
//{
//public:
//	string name;
//	string ID;
//
//	void show_name()
//	{
//		cout << "name=" << name << "\n" <<endl;
//	}
//	void show_number()
//	{
//		cout << "number=" << ID << "\n" << endl;
//	}
//	void setname(char *my_name)
//	{
//		name = my_name;
//	}
//	void setID(char *my_ID)
//	{
//		ID = my_ID;
//	}
//};

class cube
{
public:
	double m_L;
	double m_W;
	double m_H;
public:
	double Two_dim()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_H * m_W);
	}
	double Three_dim()
	{
		return m_L * m_W * m_H;
	}

};

void Compare_cube(cube c1,cube c2)
{
	if (c1.m_H == c2.m_H)
		cout << "两块立方体相同\n" << endl;
	else
	{
		cout << "两块立方体不相同\n" << endl;
	}
}

int main()
{
	cube c1,c2;
	c1.m_H = c1.m_L = c1.m_W = 1.2;
	c2.m_H = c2.m_L = c2.m_W = 1.2;
	cout<< "c1的面积为："<<c1.Two_dim()<<"\n"<< endl;
	cout << "c1的体积为：" << c1.Three_dim() << "\n" << endl;
	cout << "c2的面积为：" << c2.Two_dim() << "\n" << endl;
	cout << "c2的体积为：" << c2.Three_dim() << "\n" << endl;
	Compare_cube(c1, c2);
	system("pause");
	return 0;
}