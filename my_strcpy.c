#include <stdio.h>
#include <assert.h>
char* my_strcpy(char*dest ,const char*src)
{
	assert(dest!=NULL);
	assert(src);
	char* ret=dest;
	while((*dest++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30]="ddddddd";
	char arr2[30]="sagdjadada";
	printf("%s",my_strcpy(arr1,arr2));

}