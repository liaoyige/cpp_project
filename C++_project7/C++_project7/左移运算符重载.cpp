#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	�������������
*/

class Person
{
public:
	//���ó�Ա�������� ���������
	void operator << (Person &p);


	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &cout,Person &p)//���� operator << (cout , p) �� cout << p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

void Person::operator<<(Person &p)
{

}

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;

    cout << p <<endl;
	cout << "p.m_A=" << p.m_A << endl;
	cout << "p.m_B=" << p.m_B << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}