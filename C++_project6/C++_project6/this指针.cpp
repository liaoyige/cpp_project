#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	 thisָ��ĸ���
   ��thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
   ��thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
   ��thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

     thisָ�����;
   �����βκͳ�Ա����ͬ��ʱ������thisָ��������
   ������ķǾ�̬��Ա�����з��ض�������ʹ�� return * this
  
*/

class Person
{
public:
	Person(int age)
	{
		//�����thisָ��ָ����вι��캯�������Ķ�������ĳ�Ա
		//Ҳ����p1���������age���ԡ�
		this->age = age;
	}
	//1���������ʹ�����÷���& ��ΪҪ��֤���ص���ԭ���Ǹ�����   
	Person & Person_Add_Age(Person &p) //���ض����ַָ�룬Ҳ���Ƕ���p2��
	{
		this->age += p.age;				    //��
		return *this;
	}
	//2����ʹ�����淽����ÿ�ζ��ᴴ��һ���µĵ�ַ��ŷ���ֵ����ʽ���ʵ����Ҳ�͵���������
	Person  Person_Add_Age_1(Person &p)//���ض����ֵ�����ص���p2�е���ֵ��
	{
		this->age += p.age;					//��
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

void test02()
{
	Person p2(10);
	Person p3(10);

	//��ʽ���˼��
	p3.Person_Add_Age(p2).Person_Add_Age(p2).Person_Add_Age(p2);
	cout << "p3������Ϊ��" << p3.age << endl;
}
//1��������Ƴ�ͻ

//2�����ض������� *this

int main()
{
	test02();
	system("pause");
	return 0;
}