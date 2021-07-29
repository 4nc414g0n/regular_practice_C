// 一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
// 请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize){
    int position=0;
    int x=0;
    int i=0;
    int* arr=(int *)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
    {
        x^=nums[i];
    }
    for(i=0;i<32;i++)
    {
        if((x>>i) & 1 == 1)
        {
            position=i;
            break;
        }
    }
    int x1=0;
    int x2=0;
    for(i=0;i<numsSize;i++)
    {
        if((nums[i] >> position) & 1 == 1)
        {
            x1^=nums[i];
        }
        else
        {
            x2^=nums[i];
        }
    }
    arr[0]=x1;
    arr[1]=x2;
    *returnSize=2;
    return arr;
}