#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

/*
	����������
	������Ҫ��ɲ���ΪCPU�����ڼ������,�Կ���������ʾ�����ڴ��������ڴ洢��
	��ÿ�������װ��������࣬�����ṩ��ͬ����������ͬ�����������Intel��
	Lenovo���̴����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿڣ�
	����ʱ��װ��̨��ͬ�ĵ��Խ��й���
*/

//�����CPU��
class CPU
{
public:
	virtual void calculate() = 0;
};

//������Կ���
class VideoCard
{
public:
	virtual void display() = 0;
};

//������ڴ�����
class Memory
{
public:
	virtual void save() = 0;
};

//������
//1��Intel
class Intel :public CPU,public VideoCard, public Memory
{
public:
	void calculate()
	{
		cout << "Intel �� CPU " << endl;
	}
	void display()
	{
		cout << "Intel �� �Կ�" << endl;
	}
	void save()
	{
		cout << "Intel �� �ڴ���" << endl;
	}
};

//2��Lenovo
class Lenovo :public CPU, public VideoCard, public Memory
{
public:
	void calculate()
	{
		cout << "Lenovo �� CPU " << endl;
	}
	void display()
	{
		cout << "Lenovo �� �Կ�" << endl;
	}
	void save()
	{
		cout << "Lenovo �� �ڴ���" << endl;
	}
};

//������
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