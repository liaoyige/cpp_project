#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	�����ǳ��������
  ǳ�������򵥵ĸ�ֵ������������������������ṩ�Ŀ���������
  ������ڶ�����������ռ䣬���п���������

  Tips:�ڽ��ж����ͷſռ�����ʱ��һ��Ҫ�Լ�д��������
	  ����ǳ�������������⣬ʹ����������
*/

class Person
{
public:
	int M_age;
	int * M_height;
	Person()
	{
		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age,int height)
	{
		M_age = age;
		M_height = new int(height);		//�����������ֶ����١��ֶ��ͷţ�
										//����Ҫ�ڶ�������ǰ���ͷš�
		cout << "Person ���вι��캯������" << endl;
	}

	//ǳ�������µ�ַ��ǰ�ͷţ��Ƿ�������������Ҫʹ�����
	Person(const Person &p)
	{
		cout << "�������캯���ĵ���" << endl;
		M_age = p.M_age;
		//M_height = p.M_height;  ������Ĭ��ʵ�־������д���
		//���ʵ�ַ���
		M_height = new int(*p.M_height);
	}

	~Person()
	{
		//�������룬���������ٵ��������ͷŲ���
		if (M_height != NULL)
		{
			delete M_height;
			M_height = NULL;
		}
		cout << "Person ��������������" << endl;
	}
};

void test01()
{
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.M_age << endl;
	cout << "p1�����Ϊ��" << *p1.M_height << endl;
	Person p2(p1);    //����������ǳ��������
	cout << "p2������Ϊ��" << p2.M_age << endl;
	cout << "p2�����Ϊ��" << *p2.M_height << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}