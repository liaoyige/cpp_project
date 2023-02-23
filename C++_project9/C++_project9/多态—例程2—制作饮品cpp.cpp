#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

// ��̬����2 �� ��Ʒ����

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void AddSth() = 0;

	//������Ʒ
	void MakeDrinking();

};
void AbstractDrinking::MakeDrinking()
{
	Boil();
	Brew();
	PourInCup();
	AddSth();
}

//��������
class Coffee:public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void AddSth()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class  Tea:public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void AddSth()
	{
		cout << "��������" << endl;
	}
};
//��������
void doWork(AbstractDrinking * abs)  //AbstractDrinking * abs = new Coffee
{
	abs->MakeDrinking();
	delete abs; //�ֶ����٣��ֶ��ͷ�
}

void test01()
{
	//��������
	doWork(new Coffee);
	cout << "----------------" << endl;
	doWork(new Tea);
}

int main()
{
	test01();
	system("pause");
	return 0;
}