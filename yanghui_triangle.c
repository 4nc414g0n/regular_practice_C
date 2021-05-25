//打印杨辉三角
#include <stdio.h>
#include <string.h>
#define N 7
int main()
{
	int i = 0;
	int arr[N][N];
	for(i=0;i<N;i++)
	{
		arr[i][0]=1;
		arr[i][i]=1;
	}
	for(i=2;i<N;i++)
	{
		for(int j=1;j<i;j++)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	//打印
	for(i=0;i<N;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}