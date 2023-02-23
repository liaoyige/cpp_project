#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
  堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
	  在C++中主要利用new在堆区开辟内存。

*/

//1、new的基本语法

int *func_1()
{
	//在堆区创建整形数据
	//new返回的是该数据类型的指针
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
	
	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	cout << *p << endl;
}

//2、在堆区利用new开辟数组
void test02()
{
	//创建10整形数据的数组，在堆区
	int * arr = new int[10];  //10代表数组有10个元素  new返回数组的首地址
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组(释放数组需要加 [ ] )
	delete[] arr;
}


//int *  func_0()
//{   
//
//1、栈区操作
//	int a = 10;  
//	return &a;
//
//2、堆区操作
//	利用new将数据开辟到堆区上
//	指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
//
//	int *p = new int (10);		这句话的意思是使用new关键字开辟一个堆区
//								将堆区的空间给到指针p，p存放的地址中，返回p
//	return p		
//}

int main()
{
	//在堆区开辟数据
	test02();

	system("pause");
	return 0;
}