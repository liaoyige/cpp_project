#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
  �������ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
	  ��C++����Ҫ����new�ڶ��������ڴ档

*/

//1��new�Ļ����﷨

int *func_1()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int *p = new int(10);
	double *p1 = new double(10.0);

	return p;
}
void test01()
{
	int * p = func_1();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	
	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;
	cout << *p << endl;
}

//2���ڶ�������new��������
void test02()
{
	//����10�������ݵ����飬�ڶ���
	int * arr = new int[10];  //10����������10��Ԫ��  new����������׵�ַ
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������(�ͷ�������Ҫ�� [ ] )
	delete[] arr;
}


//int *  func_0()
//{   
//
//1��ջ������
//	int a = 10;  
//	return &a;
//
//2����������
//	����new�����ݿ��ٵ�������
//	ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
//
//	int *p = new int (10);		��仰����˼��ʹ��new�ؼ��ֿ���һ������
//								�������Ŀռ����ָ��p��p��ŵĵ�ַ�У�����p
//	return p		
//}

int main()
{
	//�ڶ�����������
	test02();

	system("pause");
	return 0;
}