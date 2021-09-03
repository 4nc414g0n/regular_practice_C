// 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

// 请你将两个数相加，并以相同形式返回一个表示和的链表。

// 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode*newhead=(struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next=NULL;
    struct ListNode*newcur=newhead;
    struct ListNode*head1=l1;
    struct ListNode*cur1=l1;
    struct ListNode*head2=l2;
    struct ListNode*cur2=l2;
    int length1=0,length2=0,newlength=0;
    while(head1)
    {
        length1++;
        head1=head1->next;
    }
    while(head2)
    {
        length2++;
        head2=head2->next;
    }
    newlength=length1>=length2?length1:length2;
    int carry=0;
    for(int i=0;i<=newlength;i++)
    {
        int sum=0;
        if(i==newlength&&carry==0)
            break;
        if(cur1==NULL&&cur2!=NULL)
        {
            sum=cur2->val+carry;
        }
        else if(cur2==NULL&&cur1!=NULL)
        {
            sum=cur1->val+carry;
        }
        else if(cur2==NULL&&cur1==NULL)
        {
            sum=carry;
        }
        else if(cur2!=NULL&&cur1!=NULL)
        {
            sum=cur1->val+cur2->val+carry;
        }
        if(sum<10)
        {
            carry=0;
        }
        else
        {
            sum=sum%10;
            carry=1;
        }
        struct ListNode*tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
        newcur->next=tmp;
        newcur=newcur->next;
        newcur->val=sum;
        newcur->next=NULL;
        if(cur1!=NULL)
            cur1=cur1->next;
        if(cur2!=NULL)
            cur2=cur2->next;
    }
    return newhead->next;



}