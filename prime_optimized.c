#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	int count =0;
	for(i=101;i<200;i+=2)//optimize
	{
		int j=0;
		int flag =1;
		for(j=2;j<=sqrt(i);j++)//optimize
		{
			if(i%j==0)
			{
				flag =0;
				break;
			}
		}
		if(flag==1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n",count);

	return 0;
}