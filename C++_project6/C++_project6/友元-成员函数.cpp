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

	void visit(); //��visit���Է���Building�е�˽�г�Ա
	void visit2(); //��visit2���������Է���Building�е�˽�г�Ա

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


//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building; //����һ�����󣨿ռ��ڶ�����������Building��ָ�Ÿ�building
}

void  GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;

//	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void  GoodGay::visit2()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	//cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
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