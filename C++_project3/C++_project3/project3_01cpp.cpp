#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
	ռλ����
	����ֵ����  ������  ���������ͣ�{ }
	ռλ���� ��������Ĭ�ϲ���
  void func(int a,int)   �����int����ռλ����
{
	cout << "this is a function" << endl;
}
*/

void func(int a,int)
{
	cout << "this is a function" << endl;
}

int main()
{
	func(10,10);
	system("pause");
	return 0;
}