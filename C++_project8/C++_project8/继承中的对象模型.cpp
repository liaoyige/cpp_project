#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	继承中的对象模型
	创建子类对象的时候会创建父类对象
	构造函数和析构函数的顺序是
	父：构造函数
	子：构造函数
	子：析构函数
	父：析构函数
*/

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};
//利用开发人员命令提示工具查看对象模型（VS文件夹下）
//跳转盘符   F:
//跳转文件路径 cd 具体路径下
//查看命名
//cl /dl reportSingleClassLayout类名  文件名

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}