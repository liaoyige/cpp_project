#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	��̬�Ļ��������Ͷ����������ԣ���װ���̳У���̬��

    ��̬��Ϊ����
  ����̬��̬���������غ�������������ھ�̬��̬�����ú�����
  ����̬��̬����������麯��ʵ������ʱ��̬

    ��̬��̬�Ͷ�̬��̬������
  ����̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
  ����̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

  ��̬��̬����������
  1���м̳й�ϵ
  2������Ҫ��д������麯��   ���أ���������ͬ�����������ͬ
							  ��д�����������������ͣ����������ȫһ����һ���麯��virtual�����ࣩ��ʵ���������ࣩ��д
  ��̬��̬��ʹ��
  �����ָ���������ָ���������
*/

class Animal
{
public:
	//�麯���� �ؼ��� virtual
	virtual void speak()  //������virtual�ؼ��� ����ڲ��ͳ�����һ��ָ��
	{					  //TIPS:ÿ��ָ�붼ռ4���ֽ�
		cout << "���ﶼ��˵��" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()  
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ���  �ڱ���׶ξ�ȷ��������ַ
//�������è˵����������ַ��Ҫ���
void DoSpeak(Animal &animal)//Animal & animal =  cat  �൱��cat��������һ������animal���뵽������
{							//���������ָ���������
	//C++�и����������Խ���ת��������ת��Ϊ���������
	animal.speak();
}

void test01()
{
	Cat cat;
	DoSpeak(cat);
	Dog dog;
	DoSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}