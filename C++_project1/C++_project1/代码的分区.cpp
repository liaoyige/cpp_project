#define _CRT_SECURE_NO_WARNINGS 1
/*
   C++程序在执行时，将内存大方向划分为4个区域
 （程序运行前出现代码区和全局区，程序运行后出现栈区和堆区）
1、代码区：存放函数体的二进制代码，由操作系统进行管理。
2、全局区：存放全局变量和静态变量以及常量。
3、栈区： 由编译器自动分配释放，存放函数的参数值，局部变量等。
4、堆区： 由程序员分配和释放，若程序员不释放，程序结束时有操作系统回收。
*/

#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//1|全局区

	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为:" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为:" << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
	//const修饰的变量
	cout << "全局常量c_g_a的地址为:" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为:" << (int)&c_g_b << endl;

	//2、创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为:" << (int)&a << endl;
	cout << "局部变量b的地址为:" << (int)&b << endl;
	cout << "全局变量g_a的地址为:" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为:" << (int)&g_b << endl;

	system("pause");
	return 0;
}