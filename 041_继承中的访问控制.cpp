#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class parent
{
public:
	int a=1;
protected:
	int b=1;
private:
	int c=1;
};

class child1:public parent
{
public:
	void test()
	{
		a=10;
	}
protected:
	
	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//���ɼ̳У�������������ν
	}
};
void main01()
{
	child1 c1;
	c1.a = 10;//���������Ķ�������
	//c1.b = 10;//err������ֻ���ڼ̳��ڲ�ʹ��
	//c1.c;//err˽�У����Ķ������ã�
}


class child2 :private parent
{
public:
	void test()
	{
		a = 10;
	}
protected:

	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//���ɼ̳У�������������ν
	}
};
void main02()
{
	child2 c1;
	//c1.a = 10;//�����˽�����ԣ��ⲿ����ʹ��
	//c1.b = 10;//err��ֻ���ڼ̳��ڲ�ʹ��
	//c1.c;//err˽�У����Ķ������ã�
}


class child3 :protected parent
{
public:
	void test()
	{
		a = 10;
	}
protected:

	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//���ɼ̳У�������������ν
	}
};
void main()
{
	child2 c1;
	//c1.a = 10;//err��ֻ���ڼ̳��ڲ�ʹ��
	//c1.b = 10;//err��ֻ���ڼ̳��ڲ�ʹ��
	//c1.c;//err˽�У����Ķ������ã�
}