#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	��Ա�����ͳ�Ա�����ķֿ��洢
   �����У����еĺ������������г�Ա��ֻ�зǾ�̬��Ա����������Ķ�����
   ʣ�µľ�̬��Ա�������Ǿ�̬��Ա��������̬��Ա����������������Ķ����ϡ�
*/

class Person
{
	int m_A; //�Ǿ�̬��Ա����	    ������Ķ�����

	static int m_B; //��̬��Ա����		��������Ķ�����

	void func() {}  //�Ǿ�̬��Ա����	��������Ķ�����

	static void func2(){} //��̬��Ա����   ��������Ķ�����
};

int Person::m_B = 0;

void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն������һ���ֽڿռ䣬δ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p1;
	//�Ǿ�̬��Ա������������Ķ����ϵ����ݣ�ռ������int��С��4
	cout << "size of p = " << sizeof(p1) << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}