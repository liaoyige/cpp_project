#define _CRT_SECURE_NO_WARNINGS 1
/*
   C++������ִ��ʱ�����ڴ���򻮷�Ϊ4������
 ����������ǰ���ִ�������ȫ�������������к����ջ���Ͷ�����
1������������ź�����Ķ����ƴ��룬�ɲ���ϵͳ���й���
2��ȫ���������ȫ�ֱ����;�̬�����Լ�������
3��ջ���� �ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ������ȡ�
4�������� �ɳ���Ա������ͷţ�������Ա���ͷţ��������ʱ�в���ϵͳ���ա�
*/

#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֱ���
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//1|ȫ����

	//��̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ:" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ:" << (int)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
	//const���εı���
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ:" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ:" << (int)&c_g_b << endl;

	//2��������ͨ�ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ:" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ:" << (int)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ:" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ:" << (int)&g_b << endl;

	system("pause");
	return 0;
}