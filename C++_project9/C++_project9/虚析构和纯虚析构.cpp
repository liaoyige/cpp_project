#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
/*
	��̬ʹ��ʱ����������������Կ��ٵ�����
	����ָ�����ͷ�ʱ�޷����õ��������������
	�Ӷ���ɶ�������������ڴ�й¶

	����  void Domake��AbstractBase * abs��
		{
			abs = new BaseSon;
			delete abs;   //�����delete�ͷŵ�ʱ���޷������������������
		}			//�����ʽ���������е�����������Ϊ���������ߴ�������
	
	  ����������  ��virtual ~��������;
	  ��������������virtual ~�������� =  0;
	  
	  TIPS��
	����������������Ҫ��������������ʵ�ֲ��С�����ᱨ��
	���������ʹ�����������ֻ�ܴ���һ��

	  �������ʹ����������ԣ�
	�����Խ������ָ���ͷ������������
	������Ҫ�о��庯��ʵ��

	  �������ʹ�����������
	������Ǵ����������������ڳ����࣬�޷�ʵ��������
*/

class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
    //���������������������ָ���ͷ�������󲻸ɾ�������
	virtual ~Animal()  
	{
		cout << "Animal��������������" << endl;
	}


	virtual void speak() = 0; //���麯��
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name); //new string  ���ص���string���͵�ָ�룬
						  //����������Ҫ�� string * m_Name���н���
	}
	virtual void speak();
	string * m_Name;//  string   m_Name  �Ǵ�����ջ����string���ͱ���
					//  string * m_Name  �Ǵ���ָ�룬���ݴ���ڶ�����
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void Cat::speak()
{
	cout << * m_Name <<"Сè��˵��" << endl;
}

void test01()
{
	//Cat c;
	//Animal * cat = new Cat; ע���ˣ����������ָ��ĵ�ַ��һ���ģ������Լ�����
	//Animal & cat = c;       Ҳ����  Animal * cat = Cat c   ��  cat = c

	Animal * cat = new Cat("Tom");
	cat->speak();
	//����ָ����������ʱ�򣬲�����������е��������������������ж������Գ����ڴ�й¶���
	delete cat;
}

int main()
{
	test01();
	system("pause");
	return 0;
}