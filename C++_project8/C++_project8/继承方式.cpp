#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
	  �̳з�ʽ�����֣�
	�������̳�
	�������̳�
	��˽�м̳�
*/

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;
	}
};
void test01()
{
	Son s1;
	s1.m_A = 100;  //�˴����ʵ���Son����������public����
//	s1.m_B = 100;  //�˴����ʵ���Son����������protected�г�Ա
				   //Son�е�m_B�Ǳ���Ȩ�� ������ʲ���
}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : protected Base2
{
public:
	void func()
	{
		m_A = 100; //�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 100; //�����б�����Ա���������б�Ϊ����Ȩ��
//		m_C = 100; //�����е�˽�г�Ա������ʲ���
	}
};
void test02()
{
	Son1 s1;
	//s1.m_A = 100;   ��Son2�� m_A��m_B����Ϊ�˱���Ȩ�ޣ������޷�����
	//s1.m_B = 100;	  protected����Ȩ�����ڿ��Է��ʣ������޷�����
}

int main()
{
	system("pause");
	return 0;
}