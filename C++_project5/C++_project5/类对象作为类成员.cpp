#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	类对象作为类成员
   即：C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
   例如：
   class   A  { }   
   class   B    
   {
		A  a;		//B类中有对象A作为成员，A为对象成员
    }

	Tips:当其他类的对象作为本类成员，构造函数调用对象成员，也就是上面的
	A类的构造函数，其次再调用B类的构造函数，析构函数先释放B类的，后释放A
	即：A 的构造函数调用
		B 的构造函数调用
		B 的析构函数调用
		A 的析构函数调用
*/

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone 的有参构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone 的析构函数调用" << endl;
	}
	//手机品牌名称
	string m_PName;
};

class Person
{
public:
	//Phone M_Phone = pName
	Person(string name, string pName) :M_name(name), M_phone(pName)
	{
		cout << "Person 的有参构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person 的析构函数调用" << endl;
	}
	//姓名
	string M_name;
	//手机
	Phone M_phone;
};

void test01()
{
	Person p("张三", "苹果MAX");
	cout << p.M_name << "拿着一个" << p.M_phone.m_PName << "手机" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}