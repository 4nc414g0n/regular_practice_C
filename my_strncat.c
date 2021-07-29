#include <stdio.h>
#include <assert.h>
char* my_strncat(char* dest, const char*src,size_t count)
{
	char* ret= dest;
	assert(dest && src);
	//先让dest指向'\0'
	while(*dest)
	{
		dest++;
	}
	//再进行追加操作
	while((count--)&&(*dest++)=(*src++))
	//count用于控制追加次数 strcat从‘\0’开始追加由于没了结束标志 会一直追加程序崩溃而strncat有count来作为结束标志
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20]="hello ";//world
	char arr2[]="world";
	printf("%s",my_strncat(arr1,arr2,3));
}