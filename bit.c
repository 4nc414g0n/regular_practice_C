//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

// 输入例子:

// 1999 2299

// 输出例子:7
#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int i=0;
	//奇数位
	printf("奇数位:");
	for(i=31;i>=0;i-=2)
	{
		printf("%d ",(a>>i)&1);
	}
	printf("\n");
	//偶数位
	printf("偶数位:");
	for(i=30;i>=1;i-=2)
	{
		printf("%d ",(a>>i)&1);
	}
	printf("\n");
}
