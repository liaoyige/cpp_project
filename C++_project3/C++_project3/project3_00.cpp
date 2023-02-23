#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
	C++——函数的进阶
1、函数可以有默认值，但也可以进行修改。
   即：传入了自己的数据，就用自己的数据，若没有即用默认值。

2、语法：返回值类型  函数名（形参 = 默认值）{}

Tips：
一、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
二、如果函数声明有默认参数，函数实现就不能有默认参数。
	即：声明和实现的函数只能有一个能有默认参数。
int func2(int a = 10, int b = 10);    //函数的声明（声明的作用在于函数放哪里都可以调用，不会报错）
int func2(int a, int b)		//函数的实现
{
return a + b;
}
*/

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int func2(int a, int b);    //函数的声明（声明的作用在于函数放哪里都可以调用，不会报错）
int func2(int a, int b)		//函数的实现
{
	return a + b;
}

int main()
{
	cout << func(10,30) << endl;
	system("pause");
	return 0;
}