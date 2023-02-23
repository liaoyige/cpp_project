#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//类做友元
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit(); //参观函数  访问Building中的属性

	Building * building;
};

class Building
{
	friend class GoodGay;  //GoodGay是Building类的好朋友，可以访问Building类内的私有成员
public:
	void test();//测试类内函数声明、
	Building();

public:
	string m_SettingRoom;//客厅

private:
	string m_BedRoom;//卧室
};


//类外写成员函数
void Building::test(){};//一般来说 类:: 就是将类内的函数拿出来重写
						//在类中只对函数进行声明，:: 是作用域的意思
						//在重新函数时要注意大括号的匹配，即两个都要有大括号。

GoodGay::GoodGay()
{
	//创建一个建筑物的对象
	building = new Building; //new一定是指针，指针指向的是堆区首地址
}							 //栈区存放地址，堆区存放数据

Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

void GoodGay::visit()
{
	cout << "好基友这个类正在访问公共区域:" << building->m_SettingRoom << endl;
	cout << "好基友这个类正在访问私有区域:" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
	system("pause");
	return 0;
}