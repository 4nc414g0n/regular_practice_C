#include <stdio.h>
#include <assert.h>
void print_pattern(int n)
{
	char arr[20][20]={0};
	assert(arr);
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			arr[i][j] = ' ';
		}
	}
	for (int i = 0,j=n-1; i <= n/2,j>=n/2; i++,j--)
	{
		arr[i][i] = '*';
		arr[i][j] = '*';
		arr[j][j] = '*';
		arr[j][i] = '*';
	}
	if (n % 2 == 1)
	{
		arr[(n/2) + 1][(n/2) + 1] = '*';
	}
	for (int k = 0; k < n; k++)
	{
		for (int f = 0; f < n; f++)
		{
			printf("%c", arr[k][f]);
			
		}
		printf("\n");

	}


}
int main()
{
	for(int i=3;i<=20;i++)
	{
		print_pattern(i);
	}
	


	
	return 0;
}