#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�̳���ͬ����Ա����

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()��������" << endl;
	}

	//�������¸�ϰһ�����صĸ���
	/*
		�����������
		Person p3 = p2 + p1;
		Person p3 = p2.operator+(p1);  (���ߵȼ�)

		����Ҳ����ʡ�Ժ������ֵĺ������ã��ڳ�Ա������
		����void func(int a)   ���ص��þ���ֻʣ���źͲ���
	  ��Person p1(10);
	  ��Person p1.func(10);    �����ߵȼۣ�
	*/
	void func(int a)
	{
		cout << "Base - func(int a)�������� ���� " << a << endl;
	}
	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son - func()��������" << endl;
	}

	int m_A;
};

//ͬ����Ա���ԵĴ���ʽ
void test01()
{
	Son s;
	// �������ͬ��������ʵĳ�Ա������������ĳ�Ա�����Ǽ̳еĻ����Ա��
	cout << "Son  �� m_A = " << s.m_A << endl; // ����ͬ�����������Ա  
	cout << "Base �� m_A = " << s.Base::m_A << endl;//����ͬ���̳г�Ա  
}									  

//ͬ����Ա�����Ĵ���ʽ
void test02()
{
	Son s;
	s.func();      //���������е�ͬ����Ա����
	s.Base::func();//���ø����е�ͬ����Ա����
//Tips:��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	 //�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
	s.Base::func(100);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}