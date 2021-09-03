// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

// 进阶：你能尝试使用一趟扫描实现吗？
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head->next==NULL)
    {
        return NULL;
    }
    struct ListNode* newhead=(struct ListNode* )malloc(sizeof(struct ListNode));
    newhead->next=head;
    struct ListNode* prev=newhead;
    struct ListNode* fast=head;
    struct ListNode* slow=prev->next;
    while(n--)
    {
        fast=fast->next;
    }
    while(1)
    {
        if(fast==NULL)
        {
            prev->next=slow->next;
            break;
        }
        slow=slow->next;
        prev=prev->next;
        fast=fast->next;
    }
    return newhead->next;

}