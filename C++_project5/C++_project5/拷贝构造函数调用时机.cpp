#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
/*
	C++�п������캯������ʱ��ͨ��������
 ��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
 ��ֵ���ݵķ�ʽ������������ֵ
 ����ֵ�ķ�ʽ���ؾֲ�����
*/

class Person
{
public:
	int M_age;
	Person()
	{
		cout << "Person Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		M_age = age;
		cout << "Person �вι��캯������" << endl;
		cout << "age = " << M_age << endl;
	}

	Person(const Person &p)
	{
		cout << "Person �������캯������" << endl;
		M_age = p.M_age;
	}

	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
};


//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
void test01()
{
	Person p1(20);
	Person p2(p1);
}


//2��ֵ���ݵķ�ʽ������������ֵ

void Make(Person &p)
{
	Person p1(p);
}

void test02()
{
	Person p;
	Make(p);

}


//3����ֵ�ķ�ʽ���ؾֲ�����

Person Make1()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = Make1();
	cout << (int*)&p << endl;
}


int main()
{
	//test01();
	test03();
	system("pause");
	return 0;
}