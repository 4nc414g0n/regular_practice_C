//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
#include <stdio.h>
int soda(int n)
{
	if(n>1)
	{
		return n+soda(n/2);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int n=0;
	printf("输入钱：\n");
	scanf("%d",&n);
	printf("%d",soda(n));
	return 0;
}