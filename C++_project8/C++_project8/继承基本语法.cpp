#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*
	�̳�			  public ���� �����̳�
	�﷨��class ���ࣺ�̳з�ʽ��public...��  ����
	���� Ҳ��Ϊ  ������
	���� Ҳ��Ϊ  ����
*/

//��ͨʵ��ҳ��
//Javaҳ��
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
//	cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//}
//
//void Java::footer()
//{
//	cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//}
//
//void Java::left()
//{
//	cout << "Java��Python��C++��...(���������б�)" << endl;
//}
//
//void Java::content()
//{
//	cout << "Javaѧ����Ƶ" << endl;
//}
////Python
//void Python::header()
//{
//	cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//}
//
//void Python::footer()
//{
//	cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//}
//
//void Python::left()
//{
//	cout << "Java��Python��C++��...(���������б�)" << endl;
//}
//
//void Python::content()
//{
//	cout << "Pythonѧ����Ƶ" << endl;
//}
////C++
//void C_Plus::header()
//{
//	cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//}
//
//void C_Plus::footer()
//{
//	cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//}
//
//void C_Plus::left()
//{
//	cout << "Java��Python��C++��...(���������б�)" << endl;
//}
//
//void C_Plus::content()
//{
//	cout << "C++ѧ����Ƶ" << endl;
//}

void test01()
{
	cout << "Java������Ƶҳ������" << endl;
	Java  ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------------" << endl;
	cout << "Python������Ƶҳ������" << endl;
	Python  py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------------" << endl;
	cout << "C++������Ƶҳ������" << endl;
	CPP  cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

//�̳�ʵ��ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;
	}
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

//Javaҳ��
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
int main()
{
	test01();
	system("pause");
	return 0;
}