#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
����������
������Ҫ��ɲ���ΪCPU�����ڼ������,�Կ���������ʾ�����ڴ��������ڴ洢��
��ÿ�������װ��������࣬�����ṩ��ͬ����������ͬ�����������Intel��
Lenovo���̴����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿڣ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���
*/

class Computer
{
public:

};

class CPU
{
public:

};

class Disp
{
public:

};

class Mem
{
public:

};


void test()
{
	Computer c1;
	CPU * cpu;
	cpu = new CPU;
	delete cpu;
}

int main()
{
	test();
	system("pause");
	return 0;
}