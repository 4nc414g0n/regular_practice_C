#include<stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret=dest;
	assert(dest && src);
	//从前向后copy(my_memcpy)
	if(dest<src)
	{
		while(num--)
		{
			*(char*)dest = *(char*)src;
			dest=(char*)dest+1;
			src=(char*)src+1;
		}
	//从后向前copy
	}
	else{
		while(num--)
		{
			*((char*)dest+num) = *((char*)src+num);
		}
	}

	return ret;
}
int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr1+5,arr1,20);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", arr1[i]);
	}
    return 0;
}