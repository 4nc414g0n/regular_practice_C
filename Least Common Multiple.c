//最小公倍数
//法一
#include <stdio.h>
int main()
{
	int A=0;
	int B=0;
	scanf("%d %d",&A,&B);
	for(int k=1;;k++)
	{
		if((A*k)%B==0)
		{
			printf("%d\n",A*k);
			break;
		}
	}
	return 0;
}
//法二
#include <stdio.h>
int main()
{
	int A=0;
	int B=0;
	scanf("%d %d",&A,&B);
	int m=A>B?A:B;
	while(1)
	{
		if(m%A==0 && m%B==0)
		{
			printf("%d",m);
			break;
		}
		m++;
	}
	return 0;
}