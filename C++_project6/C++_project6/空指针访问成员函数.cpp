#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��ָ����ó�Ա����

class Person
{
public:
	void ShowClassName()
	{
		cout << "this is Person class" << endl;
	}

	void ShowPersonAge()
	{
		//����ʹ�ÿ�ָ�����,this���Ϊ��ָ�룬���ڵ������޷����á�
		//������ָ����Է��ʳ�Ա�������޷����ʳ�Ա��������Ա�������������϶���
		//�޸İ취
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->My_Age << endl;
	}
	int My_Age;

};

void test01()
{
	Person * p = NULL; //���ﴴ����һ�����ָ�룬����NULL�������˶�������û��ʵ��������

	p->ShowClassName();

	p->ShowPersonAge();
}


int main()
{
	test01();
	system("pause");
	return 0;
}