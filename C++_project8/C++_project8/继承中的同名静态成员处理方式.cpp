#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ

class Base
{
public:
	static int m_A;
};

int Base::m_A = 100;

class Son:public Base
{
public:
	static int m_A;
};
int Son::m_A = 200;

//ͬ����̬��Ա����
void test01()
{
	//1��ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << "Son  �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base::m_A << endl;

	//2��ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son  �� m_A = " << Son::m_A << endl;
	cout << "Base �� m_A = " << Son::Base::m_A << endl;
}
//ͬ����̬��Ա����(ͬ��)
void test02()
{

}

int main()
{
	test01();
	system("pause");
	return 0;
}