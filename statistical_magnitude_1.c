//统计二进制中1的个数
#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int count=0;
	for(int i=0;i<32;i++)
	{
		if((a&1)==1)
		{
			count++;
		}
		a=a>>1;
	}
	printf("%d\n",count );
}
//方法三：
// 思路：采用相邻的两个数据进行按位与运算
// 举例：
// 9999：‭10 0111 0000 1111‬
// 第一次循环：n=9999   n=n&(n-1)=9999&9998= 9998
// 第二次循环：n=9998   n=n&(n-1)=9998&9997= 9996
// 第三次循环：n=9996   n=n&(n-1)=9996&9995= 9992
// 第四次循环：n=9992   n=n&(n-1)=9992&9991= 9984
// 第五次循环：n=9984   n=n&(n-1)=9984&9983= 9728
// 第六次循环：n=9728   n=n&(n-1)=9728&9727= 9216
// 第七次循环：n=9216   n=n&(n-1)=9216&9215= 8192
// 第八次循环：n=8192   n=n&(n-1)=8192&8191= 0
 
 
// 可以观察下：此种方式，数据的二进制比特位中有几个1，循环就循环几次，而且中间采用了位运算，处理起来比较高效
// int count_one_bit(int n)
// {
// 	int count = 0;
// 	while(n)
// 	{
// 		n = n&(n-1);
// 		count++;
// 	}
// 	return count;
// }