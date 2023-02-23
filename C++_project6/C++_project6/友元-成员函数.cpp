#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	
*/

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit(); //让visit可以访问Building中的私有成员
	void visit2(); //让visit2函数不可以访问Building中的私有成员

	Building * building;
};

class Building
{
	friend void GoodGay::visit();

public:
	Building();
	string m_SettingRoom;

private:
	string m_BedRoom;
};


//类外实现成员函数
Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building; //创建一个对象（空间在堆区），返回Building类指着给building
}

void  GoodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_SettingRoom << endl;

//	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}
void  GoodGay::visit2()
{
	cout << "visit函数正在访问：" << building->m_SettingRoom << endl;
	//cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}