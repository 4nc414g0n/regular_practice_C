// 给你两个单链表的头节点 headA 和 headB ，
// 请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 。

/*
解题思路：
此题可以先计算出两个链表的长度，让长的链表先走相差的长度，然后两个链表同时走，直到遇到相同的节点，即为第一个公共节点
*/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA = 0, lenB = 0;
    struct ListNode* curA = headA, *curB = headB;
    //计算链表长度
    while(curA) {
        ++lenA;
        curA = curA->next;
    }
    
    while(curB) {
        ++lenB;
        curB = curB->next;
    }
    
    int gap = abs(lenA-lenB);
    struct ListNode* longList = headA, *shortList = headB;
    if(lenA < lenB) {
        longList = headB;
        shortList = headA;
    }
    //让长链表先走几步
    while(gap--){
        longList = longList->next;
    }
    //两个链表同时走，直到遇到相同的节点
    while(longList && shortList)
    {
        if(longList == shortList) {
            return longList;
        }
        else {
            longList = longList->next;
            shortList = shortList->next;
        }
    }
    
    return NULL;
}