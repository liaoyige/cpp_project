#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
   引用的基本语法：
   数据类型  &别名 = 原名		例：
   int a = 10;
   int &b = a;			这个时候a和b都是10，尽管b中存放的是a的地址，但是编译器
   cout << a << endl;	会帮你把该地址中的数值拿出来用。
   cout << b << endl;   两者一模一样，原理是编译器会把地址中的值帮你拿出来操作
   Tips：引用只在C++中才能实现，在C语言中会报错的。

*/

void ShowValue(const int & ref)
{
	cout << "a的值为：" << ref << "\n" << endl;
}



int main()
{
	//常量引用（引用demo）
	//使用场景：用来修饰新参，防止误操作。
	
//  int &ref = 10;   这句话是错误的，引用必须调用栈上的数据或者是堆上的数据。
//  const int & ref = 10;  这句话是对的，加上const后，编译器将代码修改为
//						int temp = 10;  const int & ref = temp;间接等于以下两行代码
	int a = 10;
	int &ref = a;	//这句话是引用栈区的数据等价于  const int & ref = 10;
//  const int & ref = 10;//表示ref为只读状态，不可修改。

	ShowValue(a);

	system("pause");
	return 0;
}