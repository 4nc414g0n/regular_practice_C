//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

// 输入例子:

// 1999 2299

// 输出例子:7
#include <stdio.h>
int NumberOf1(int n)//判断ret二进制1的个数
{
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	int m=0;
	int n=0;
	int count =0;
	scanf("%d %d",&m,&n);
	int ret =m^n;
	count = NumberOf1(ret);
	printf("%d",count);
}
