#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
案例描述：
电脑主要组成部分为CPU（用于计算机）,显卡（用于显示），内存条（用于存储）
将每个零件封装出抽象基类，并且提供不同厂商生产不同的零件，例如Intel和
Lenovo厂商创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口，
测试时组装三台不同的电脑进行工作
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