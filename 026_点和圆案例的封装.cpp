#include"iostream"
#include "mycircle.h"
#include "mypoint.h"
using namespace std;
void main()
{
	mycircle c1;
	mypoint p1;
	c1.setmycircle(2, 3, 3);
	p1.setpoint(2, 2);
	int ret = c1.judge(p1);
	if (ret == 1)
	{
		printf("p点在圆内");
	}
	else
	{
		printf("p点不在圆内");
	}
}