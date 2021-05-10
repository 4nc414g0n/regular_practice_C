//不创建临时变量交换两数
#include <stdio.h>
int main()
{
	int a=3;
	int b=5;
	a=a^b;//准备
	b=a^b;//b=a^b^b(以上一个式子为已知条件)
	a=a^b;//a=a^a^b(以上一个式子为已知条件)
	printf("a=%d b=%d\n",a,b);
}