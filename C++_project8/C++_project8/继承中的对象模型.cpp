#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	�̳��еĶ���ģ��
	������������ʱ��ᴴ���������
	���캯��������������˳����
	�������캯��
	�ӣ����캯��
	�ӣ���������
	������������
*/

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};
//���ÿ�����Ա������ʾ���߲鿴����ģ�ͣ�VS�ļ����£�
//��ת�̷�   F:
//��ת�ļ�·�� cd ����·����
//�鿴����
//cl /dl reportSingleClassLayout����  �ļ���

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}