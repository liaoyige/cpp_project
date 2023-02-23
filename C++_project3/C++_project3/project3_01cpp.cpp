#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
	占位参数
	返回值类型  函数名  （数据类型）{ }
	占位参数 还可以有默认参数
  void func(int a,int)   这里的int就是占位参数
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