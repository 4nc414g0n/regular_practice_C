
// 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。

// 为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，则在该链表中没有环。注意，pos 仅仅是用于标识环的情况，并不会作为参数传递到函数中。

// 说明：不允许修改给定的链表。

// 进阶：

// 你是否可以使用 O(1) 空间解决此题？


/*
解题思路：
如果链表存在环，则fast和slow会在环内相遇，定义相遇点到入口点的距离为X,定义环的长度为C,定义头到入口的距离为L,fast在slow进入环之后一圈内追上slow,则会得知：
slow所走的步数为:L + X
fast所走的步数为：L + X + N * C
并且fast所走的步数为slow的两倍，故：
2*(L + X) = L + X + N * C
即： L = N * C - X
所以从相遇点开始slow继续走，让一个指针从头开始走，相遇点即为入口节点
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head,*slow=head;
    struct ListNode *judge;
    while(fast&&fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            judge=fast;
            break;
        }
            
    }
    struct ListNode *first=head;
    while(first&&first->next&&judge&&judge->next)
    {
        if(first==judge)
        {
            return first;
        }
        else
        {
            first=first->next;
            judge=judge->next;
        }    
        
        
    }
    return NULL;
}