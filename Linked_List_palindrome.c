// 对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。

// 给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。

// 测试样例：
// 1->2->2->1
// 返回：true


/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    struct ListNode* reverse(ListNode *phead){
        struct ListNode *prev=NULL;
        struct ListNode *cur=phead;
        struct ListNode *latter;
        while(cur)
        {
            latter=cur->next;
            cur->next=prev;
            prev=cur;
            cur=latter;
        }
        return prev;
}
    bool chkPalindrome(ListNode* A) {
        struct ListNode *cur=A;
        struct ListNode *fast=A;
        struct ListNode *slow=A;
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        struct ListNode *newhead=reverse(slow);
        while(newhead)
        {
            if((cur->val)!=(newhead->val))
                return false;
            else{
                cur=cur->next;
                newhead=newhead->next;
            }
        }
        return true;
    }
};