#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
 ��������
  ����Ա�������const�����ǳ�Ϊ�������Ϊ������
  ���������ڲ������޸ĳ�Ա����
  ����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
 ������
  ����������ǰ��const�Ƹö���Ϊ������
  ��������ֻ�ܵ��ó�����
*/

//������
class Person
{
public:
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	//����const  Person * const this
	//this = ���� * const this
	//const this = const  Person * const this
	void ShowPerson()  const
	{
	  //this = NULL;   thisָ��ı���Ϊָ�볣�� ָ���ָ���ǲ����Ա��޸ĵ�
		this->MY_Name = 100;
	}

	void func()
	{
		cout << "NULL" << endl;
	}
	int MY_Name_0;
	mutable int MY_Name; //����ǰ����Ϲؼ���mutable������const���޸������ֵ
};

void  test01()
{
	Person p;
	p.ShowPerson();
}


//�����󣨲������޸����ԣ�

void test02()
{
	const Person p1;//�ڶ���ǰ��const����Ϊ������
	//p1.MY_Name_0 = 100;  ��
	//p1.MY_Name = 100;    �� �Ա����仰��ֻҪ��Ա���Լ���mutable�Ϳ����޸�const������ֵ
	//p1.ShowPerson();	   ��
	//p1.func();		   �� ������ֻ�ܵ��ó���������ͨ���������޸�����
}



int main()
{
	test01();
	system("pause");
	return 0;
}