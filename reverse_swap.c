//I like Beijing.只用一个数组，标点相对位置不变
//Beijing. like I
#include <stdio.h>
#include <string.h>
void reverse(char*arr, int left, int end)
{
	while (left <= end)
	{
		int tmp = arr[left];
		arr[left] = arr[end];
		arr[end] = tmp;
		left++;
		end--;
	}

}
void blank(char*arr, int left, int right)
{
	for (right; ; right++)
	{
		if (arr[right + 1] == ' ')
		{
			reverse(arr, left, right);
			left = right + 2;
		}
		else if (arr[right+1] == '\0')
		{
			reverse(arr, left, right);
			break;
		}
	}
}
int main()
{
	char arr[100] = "";
	gets_s(arr);
	int len = strlen(arr);
	int left = 0;
	reverse(arr, left, len - 1);
	blank(arr, left, left);
	printf("%s\n", arr);
	return 0;
}
