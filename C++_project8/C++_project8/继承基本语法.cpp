#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*
	继承			  public 就是 公共继承
	语法：class 子类：继承方式（public...）  父类
	子类 也称为  派生类
	父类 也称为  基类
*/

//普通实现页面
//Java页面
class Java
{
public:
	void header();
	void footer();
	void left();
	void content();

};

class Python
{
public:
	void header();
	void footer();
	void left();
	void content();

};

class C_Plus
{
public:
	void header();
	void footer();
	void left();
	void content();

};

////Java
//void Java::header()
//{
//	cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//}
//
//void Java::footer()
//{
//	cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//}
//
//void Java::left()
//{
//	cout << "Java、Python、C++、...(公共分类列表)" << endl;
//}
//
//void Java::content()
//{
//	cout << "Java学科视频" << endl;
//}
////Python
//void Python::header()
//{
//	cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//}
//
//void Python::footer()
//{
//	cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//}
//
//void Python::left()
//{
//	cout << "Java、Python、C++、...(公共分类列表)" << endl;
//}
//
//void Python::content()
//{
//	cout << "Python学科视频" << endl;
//}
////C++
//void C_Plus::header()
//{
//	cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//}
//
//void C_Plus::footer()
//{
//	cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//}
//
//void C_Plus::left()
//{
//	cout << "Java、Python、C++、...(公共分类列表)" << endl;
//}
//
//void C_Plus::content()
//{
//	cout << "C++学科视频" << endl;
//}

void test01()
{
	cout << "Java下载视频页面如下" << endl;
	Java  ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------------" << endl;
	cout << "Python下载视频页面如下" << endl;
	Python  py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------------" << endl;
	cout << "C++下载视频页面如下" << endl;
	CPP  cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

//继承实现页面
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...(公共分类列表)" << endl;
	}
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

//Java页面
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
int main()
{
	test01();
	system("pause");
	return 0;
}