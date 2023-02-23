#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	友元（关键字 friend）
  目的:让一个函数或者类访问另一个类中的私有成员
  实现：全局函数做友元
		类做友元
		成员函数做友元
*/

//建筑物类
class Building
{
	//goodGay全局函数是Building好朋友，可以访问私有成员
	friend void goodGay(Building * building);//全局函数的友元声明
public:
     Building()
	{
		m_SettingRoom = "客厅";
		m_BedRoom = "卧室";
    }

public:
	string  m_SettingRoom;//客厅

private:
	string  m_BedRoom;//卧室
};

//全局函数
void goodGay(Building * building)
{
	cout << "好基友全局函数 正在访问：" << building->m_SettingRoom << endl;

	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");
	return 0;
}