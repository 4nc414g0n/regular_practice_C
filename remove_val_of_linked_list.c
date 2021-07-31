/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    //方法：用尾插
    if(head==NULL)
        return NULL;
    struct ListNode* newhead=NULL;
    struct ListNode* tail=NULL;
    struct ListNode* cur=head;
    while(cur)
    {
        struct ListNode* next =cur->next;//记录cur->next
        if(cur->val == val)
        {
            free(cur);
        }
        else
        {
            if(tail==NULL)//第一次进入else，tail必为NULL，以让newhead被赋值
            {
                newhead=tail=cur;
            }
            else{         //如果删的不是第一个，tail一定会不为空
                tail=tail->next=cur;//更新尾，同时tail->next赋给tail
            }
        }
        cur=next;
    }
    if(tail)//当全为val时,tail为NULL，tail->next访问空指针所以要加个判断
        tail->next=NULL;
    return newhead;
}