// 给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    // struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    // newnode->next=head;
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode* cac=head;
    //struct ListNode* cur=head;
    int n=0;
    while(1)
    {
        if(cac->next==NULL)
        {
            n++;
            break;
        }
        cac=cac->next;
        n++;
    }
    printf("%d\n",n);
    if(0==k%n)
        return head;

    cac->next=head;//构造环形链表
    //int limit=k>n?(k%n)*n+1:(k%n)*n;
    //printf("%d",(k%n)*n);
    int times=k%n+1;
    while(--times)
    {
        struct ListNode* cur=head;
        printf("%d\n",head->val);
        int tmp=cur->val;
        for(int i=0;i<=n;i++)
        {
            struct ListNode* next=cur->next;
            int tem=next->val;
            next->val=tmp;
            tmp=tem;
            cur=next;
        }
    }
    
    struct ListNode* cur2=head;
    while(--n)
    {
        cur2=cur2->next;
    }
    cur2->next=NULL;
    return head;
}