#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
	C++���������Ľ���
1������������Ĭ��ֵ����Ҳ���Խ����޸ġ�
   �����������Լ������ݣ������Լ������ݣ���û�м���Ĭ��ֵ��

2���﷨������ֵ����  ���������β� = Ĭ��ֵ��{}

Tips��
һ�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ�����
	����������ʵ�ֵĺ���ֻ����һ������Ĭ�ϲ�����
int func2(int a = 10, int b = 10);    //�������������������������ں��������ﶼ���Ե��ã����ᱨ��
int func2(int a, int b)		//������ʵ��
{
return a + b;
}
*/

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int func2(int a, int b);    //�������������������������ں��������ﶼ���Ե��ã����ᱨ��
int func2(int a, int b)		//������ʵ��
{
	return a + b;
}

int main()
{
	cout << func(10,30) << endl;
	system("pause");
	return 0;
}