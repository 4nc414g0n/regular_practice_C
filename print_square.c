//用C语言在屏幕上输出以下图案：打印菱形
#include <stdio.h>
void print_object(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	print_object(n);
	return 0;
}