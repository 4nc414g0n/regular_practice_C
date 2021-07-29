#include <stdio.h>
#include <assert.h>
char* my_strncpy(char*dest ,const char*src,size_t count)
{
	assert(dest!=NULL);
	assert(src);
	char* ret=dest;
	while((count--)&&(*dest++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30]="ddddddd";
	char arr2[30]="safjkjkbb";
	printf("%s",my_strncpy(arr1,arr2,5));

}