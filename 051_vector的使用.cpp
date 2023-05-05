#include<iostream>
#include<vector>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

void main()
{
	vector<int>a;
	a.push_back(2);
	a.push_back(1);
	a.push_back(3);
	a.pop_back();
	cout << a[0] << ' ' << a[1] << endl;
	cout << "hello..." << endl;
	system("pause");
}