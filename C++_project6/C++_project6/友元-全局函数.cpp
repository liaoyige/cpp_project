#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	��Ԫ���ؼ��� friend��
  Ŀ��:��һ�����������������һ�����е�˽�г�Ա
  ʵ�֣�ȫ�ֺ�������Ԫ
		������Ԫ
		��Ա��������Ԫ
*/

//��������
class Building
{
	//goodGayȫ�ֺ�����Building�����ѣ����Է���˽�г�Ա
	friend void goodGay(Building * building);//ȫ�ֺ�������Ԫ����
public:
     Building()
	{
		m_SettingRoom = "����";
		m_BedRoom = "����";
    }

public:
	string  m_SettingRoom;//����

private:
	string  m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(Building * building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SettingRoom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
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