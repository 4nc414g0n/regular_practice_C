//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* cur = head;
    struct ListNode* newhead = NULL;
    struct ListNode* next=NULL;
    if(head==NULL)
        return NULL;
    while(cur)
    {
        next=cur->next;
        cur->next=newhead;
        newhead=cur;
        cur=next;
    }

    return newhead;
    }