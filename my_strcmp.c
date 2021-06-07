#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	while(*s1==*s2)
	{
		if(*s1=='\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	// if(*s1>*s2)
	// {
	// 	return 1;
	// }
	// else
	// {
	// 	return -1;
	// }
	return *s1-*s2;
}
int main()
{
	char *p="hello";//world
	char *p1="world";
	printf("%d",my_strcmp(p,p1));
}