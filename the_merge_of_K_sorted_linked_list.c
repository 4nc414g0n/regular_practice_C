// 给你一个链表数组，每个链表都已经按升序排列。

// 请你将所有链表合并到一个升序链表中，返回合并后的链表。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(0==listsSize)
    {
        return NULL;
    }
    for(int i=0;i<listsSize;i++)
    {
        if(lists[i]!=NULL)
            goto flag;
    }
    return NULL;
    flag:;
    int *arr=(int *)malloc(sizeof(int));
    int n=0;
    for(int i=0;i<listsSize;i++)
    {
        struct ListNode*cur=lists[i];
        while(cur)
        {
            arr[n]=cur->val;
            n++;
            arr=(int *)realloc(arr,sizeof(int)*(n+1));
            cur=cur->next;
        }
    }
    struct ListNode* newhead=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur=newhead;
    ///////////////////////////////
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cur->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        cur=cur->next;
        cur->val=arr[i];
        cur->next=NULL;
    }
    return newhead->next;
}