#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

// 多态案例2 — 饮品制作

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void AddSth() = 0;

	//制作饮品
	void MakeDrinking();

};
void AbstractDrinking::MakeDrinking()
{
	Boil();
	Brew();
	PourInCup();
	AddSth();
}

//制作咖啡
class Coffee:public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮开水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void AddSth()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶叶
class  Tea:public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void AddSth()
	{
		cout << "加入滤网" << endl;
	}
};
//制作函数
void doWork(AbstractDrinking * abs)  //AbstractDrinking * abs = new Coffee
{
	abs->MakeDrinking();
	delete abs; //手动开辟，手动释放
}

void test01()
{
	//制作咖啡
	doWork(new Coffee);
	cout << "----------------" << endl;
	doWork(new Tea);
}

int main()
{
	test01();
	system("pause");
	return 0;
}