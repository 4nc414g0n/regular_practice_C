#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char*src)
{
	char* ret= dest;
	assert(dest && src);
	while(*dest)
	{
		dest++;
	}
	while((*dest++)=(*src++))
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20]="hello ";//world
	char arr2[]="world";
	printf("%s",my_strcat(arr1,arr2));
}