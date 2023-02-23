#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
	案例描述：分别利用普通写法和多态技术，实现两个操作数进行运算的计算机类
	多态实现计算器的好处：
	1、组织结构清晰
	2、可读性强  （子类重写父类虚函数从而实现层次清晰）
	3、对于前期和后期的扩展和维护性高
*/
class Calculator
{
public:
	int GetResult(string oper);  //类内函数可以访问类内成员
	int M_num1;
	int M_num2;
};

int Calculator::GetResult(string oper)
{
	if (oper == "+")
	{
		return M_num1 + M_num2;
	}	
	else if (oper == "-")
	{
		return M_num1 - M_num2;
	}
	else if (oper == "*")
	{
		return M_num1 * M_num2;
	}
	else if (oper == "/")
	{
		return M_num1 / M_num2;
	}
		
}

void test01()
{
	Calculator c1;
	c1.M_num1 = 10;
	c1.M_num2 = 20;
	cout << c1.GetResult("+");
}

//利用多态实现计算器

//实现计算器的抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
//除法计算器类
class DivCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 / m_Num2;
	}
};

//多态形成条件：父类指针引用或指向子类对象

//1、父类引用子类对象所形成的多态
void test02(AbstractCalculator & calculator)
{
	calculator.m_Num1 = 10;
	calculator.m_Num2 = 20;
	cout << calculator.getResult() << endl;
}

//2、父类指针指向的子类对象形成的多态
void test03()
{
	//加法运算
	AbstractCalculator * C = new AddCalculator;//new操作在堆区开辟空间，类建立对象
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	//用完后记得销毁   注意，这里处理掉的是堆区的数据，不是指针，指针类型还是会保留
	delete C;

	//减法运算
	C = new SubCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;

	//乘法运算
	C = new MulCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;

	//出发运算
	C = new DivCalculator;
	C->m_Num1 = 10;
	C->m_Num2 = 10;
	cout << C->getResult() << endl;
	delete C;
}


int main()
{
	//test01();
	//AddCalculator add;
	//test02(add);
	test03();
	system("pause");
	return 0;
}