#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	�������Ϊ���Ա
   ����C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
   ���磺
   class   A  { }   
   class   B    
   {
		A  a;		//B�����ж���A��Ϊ��Ա��AΪ�����Ա
    }

	Tips:��������Ķ�����Ϊ�����Ա�����캯�����ö����Ա��Ҳ���������
	A��Ĺ��캯��������ٵ���B��Ĺ��캯���������������ͷ�B��ģ����ͷ�A
	����A �Ĺ��캯������
		B �Ĺ��캯������
		B ��������������
		A ��������������
*/

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone ���вι��캯������" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone ��������������" << endl;
	}
	//�ֻ�Ʒ������
	string m_PName;
};

class Person
{
public:
	//Phone M_Phone = pName
	Person(string name, string pName) :M_name(name), M_phone(pName)
	{
		cout << "Person ���вι��캯������" << endl;
	}
	~Person()
	{
		cout << "Person ��������������" << endl;
	}
	//����
	string M_name;
	//�ֻ�
	Phone M_phone;
};

void test01()
{
	Person p("����", "ƻ��MAX");
	cout << p.M_name << "����һ��" << p.M_phone.m_PName << "�ֻ�" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}