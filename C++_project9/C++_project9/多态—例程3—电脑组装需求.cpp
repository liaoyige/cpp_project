#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	案例描述：
	电脑主要组成部分为CPU（用于计算机）,显卡（用于显示），内存条（用于存储）
	将每个零件封装出抽象基类，并且提供不同厂商生产不同的零件，例如Intel和
	Lenovo厂商创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口，
	测试时组装三台不同的电脑进行工作
*/

//抽象的CPU类
class CPU
{
public:
	virtual void calculate() = 0;
};

//抽象的显卡类
class VideoCard
{
public:
	virtual void display() = 0;
};

//抽象的内存条类
class Memory
{
public:
	virtual void save() = 0;
};

//厂商类
//1、Intel
class Intel :public CPU,public VideoCard, public Memory
{
public:
	void calculate()
	{
		cout << "Intel 的 CPU " << endl;
	}
	void display()
	{
		cout << "Intel 的 显卡" << endl;
	}
	void save()
	{
		cout << "Intel 的 内存条" << endl;
	}
};

//2、Lenovo
class Lenovo :public CPU, public VideoCard, public Memory
{
public:
	void calculate()
	{
		cout << "Lenovo 的 CPU " << endl;
	}
	void display()
	{
		cout << "Lenovo 的 显卡" << endl;
	}
	void save()
	{
		cout << "Lenovo 的 内存条" << endl;
	}
};

//电脑类
class Computer
{
public:
	Computer(CPU * cpu,VideoCard * vc,Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void Spin()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->save();
		
	}

private:
	CPU * m_cpu;
	VideoCard * m_vc ;
	Memory * m_mem;
};

void test01()
{
	CPU * Intel_cpu = new Intel;
	VideoCard * Intel_vc = new Intel;
	Memory * Intel_mem = new Intel;

	CPU * Lenovo_cpu = new Lenovo;
	VideoCard * Lenovo_vc = new Lenovo;
	Memory * Lenovo_mem = new Lenovo;

	Computer c0(Intel_cpu, Lenovo_vc, Lenovo_mem);
	Computer c1(Lenovo_cpu, Intel_vc, Lenovo_mem);
	Computer c2(Intel_cpu, Intel_vc, Lenovo_mem);

	//Computer * c0 = new Computer(new Intel, new Lenovo, new Lenovo);
	//Computer * c1 = new Computer(new Lenovo, new Intel, new Lenovo);
	//Computer * c2 = new Computer(new Intel, new Intel, new Lenovo);

	c0.Spin();
	/*c0->Spin();*/
	/*c.Spin(new Intel, new Lenovo, new Lenovo);*/
	cout << "-----------------" << endl;
	c1.Spin();
	/*c1->Spin();*/
	/*c.Spin(new Lenovo, new Intel, new Lenovo);*/
	cout << "-----------------" << endl;
	c2.Spin();
	/*c2->Spin();*/
	/*c.Spin(new Intel, new Intel, new Lenovo);*/

	/*delete c0, c1, c2;*/
	delete Intel_cpu, Intel_vc, Intel_mem, Lenovo_cpu, Lenovo_vc, Lenovo_mem;
}

int main()
{
	test01();
	system("pause");
	return 0;
}