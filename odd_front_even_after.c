#include <stdio.h>
void move(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		while((left<right)&&(arr[left]%2==1))
		{
			left++;
		}
		while((left<right)&&(arr[right]%2==0))
		{
			right--;
		}
		if(left<right)
		{
			int tmp=arr[left];
			arr[left]=arr[right];
			arr[right]=tmp;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[100]={1,2,3,4,6,5,7,8,9,10};
	int i=0;
	while(arr[i]!='\0')
	{
		i++;
	}
	move(arr,i);

	return 0;
}