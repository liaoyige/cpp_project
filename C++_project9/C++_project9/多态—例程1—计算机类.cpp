#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	�����������ֱ�������ͨд���Ͷ�̬������ʵ��������������������ļ������
	��̬ʵ�ּ������ĺô���
	1����֯�ṹ����
	2���ɶ���ǿ  ��������д�����麯���Ӷ�ʵ�ֲ��������
	3������ǰ�ںͺ��ڵ���չ��ά���Ը�
*/
class Calculator
{
public:
	int GetResult(string oper);  //���ں������Է������ڳ�Ա
	int M_num1;
	int M_num2;
};

int Calculator::GetResult(string oper)
{
	if (oper == "+")
	{
		return M_num1 + M_num2;
	}	
	else if (oper == "-")
	{
		return M_num1 - M_num2;
	}
	else if (oper == "*")
	{
		return M_num1 * M_num2;
	}
	else if (oper == "/")
	{
		return M_num1 / M_num2;
	}
		
}

void test01()
{
	Calculator c1;
	c1.M_num1 = 10;
	c1.M_num2 = 20;
	cout << c1.GetResult("+");
}

//���ö�̬ʵ�ּ�����

//ʵ�ּ������ĳ�����
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//������������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
//������������
class DivCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 / m_Num2;
	}
};

//��̬�γ�����������ָ�����û�ָ���������

//1��������������������γɵĶ�̬
void test02(AbstractCalculator & calculator)
{
	calculator.m_Num1 = 10;
	calculator.m_Num2 = 20;
	cout << calculator.getResult() << endl;
}

//2������ָ��ָ�����������γɵĶ�̬
void test03()
{
	//�ӷ�����
	AbstractCalculator * C = new AddCalculator;//new�����ڶ������ٿռ䣬�ཨ������
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	//�����ǵ�����   ע�⣬���ﴦ������Ƕ��������ݣ�����ָ�룬ָ�����ͻ��ǻᱣ��
	delete C;

	//��������
	C = new SubCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;

	//�˷�����
	C = new MulCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;

	//��������
	C = new DivCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;
}


int main()
{
	//test01();
	//AddCalculator add;
	//test02(add);
	test03();
	system("pause");
	return 0;
}