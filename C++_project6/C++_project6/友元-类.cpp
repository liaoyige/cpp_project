#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//������Ԫ
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit(); //�ιۺ���  ����Building�е�����

	Building * building;
};

class Building
{
	friend class GoodGay;  //GoodGay��Building��ĺ����ѣ����Է���Building���ڵ�˽�г�Ա
public:
	void test();//�������ں���������
	Building();

public:
	string m_SettingRoom;//����

private:
	string m_BedRoom;//����
};


//����д��Ա����
void Building::test(){};//һ����˵ ��:: ���ǽ����ڵĺ����ó�����д
						//������ֻ�Ժ�������������:: �����������˼
						//�����º���ʱҪע������ŵ�ƥ�䣬��������Ҫ�д����š�

GoodGay::GoodGay()
{
	//����һ��������Ķ���
	building = new Building; //newһ����ָ�룬ָ��ָ����Ƕ����׵�ַ
}							 //ջ����ŵ�ַ�������������

Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
}

void GoodGay::visit()
{
	cout << "�û�����������ڷ��ʹ�������:" << building->m_SettingRoom << endl;
	cout << "�û�����������ڷ���˽������:" << building->m_BedRoom << endl;
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