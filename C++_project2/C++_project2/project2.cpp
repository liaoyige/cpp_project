#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
   ���õĻ����﷨��
   ��������  &���� = ԭ��		����
   int a = 10;
   int &b = a;			���ʱ��a��b����10������b�д�ŵ���a�ĵ�ַ�����Ǳ�����
   cout << a << endl;	�����Ѹõ�ַ�е���ֵ�ó����á�
   cout << b << endl;   ����һģһ����ԭ���Ǳ�������ѵ�ַ�е�ֵ�����ó�������
   Tips������ֻ��C++�в���ʵ�֣���C�����лᱨ��ġ�

*/

void ShowValue(const int & ref)
{
	cout << "a��ֵΪ��" << ref << "\n" << endl;
}



int main()
{
	//�������ã�����demo��
	//ʹ�ó��������������²Σ���ֹ�������
	
//  int &ref = 10;   ��仰�Ǵ���ģ����ñ������ջ�ϵ����ݻ����Ƕ��ϵ����ݡ�
//  const int & ref = 10;  ��仰�ǶԵģ�����const�󣬱������������޸�Ϊ
//						int temp = 10;  const int & ref = temp;��ӵ����������д���
	int a = 10;
	int &ref = a;	//��仰������ջ�������ݵȼ���  const int & ref = 10;
//  const int & ref = 10;//��ʾrefΪֻ��״̬�������޸ġ�

	ShowValue(a);

	system("pause");
	return 0;
}