#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* s1=str1;
	const char* s2=str2;
	const char* cp = str1;//cp记录str1相同的首字符
	if(*s2=='\0')
	{
		return (char*)str1;
	}
	while(*cp)
	{
		s1 = cp;
		s2=str2;
		while(*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char *p="hello";//world
	char *p1="ell";
	printf("%s",my_strstr(p,p1));
}