// 现有一链表的头指针 ListNode* pHead，给一定值x，
// 编写一段代码将所有小于x的结点排在其余结点之前，
// 且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        if(pHead==NULL)
            return NULL;
        struct ListNode*less=NULL;
        struct ListNode*lesstail=NULL;
        struct ListNode*bigger=NULL;
        struct ListNode*biggertail=NULL;
        struct ListNode*cur=pHead;
        //放入大小两个链表再链接
        while(cur!=NULL)
        {
            if(cur->val < x){
                if(less==NULL)
                {
                    less=cur;
                    lesstail=cur;
//                     lesstail=lesstail->next;
                }
                    
                else{
                    
                    lesstail->next=cur;
                    lesstail=lesstail->next;
                }
            }
            else{
                if(bigger==NULL)
                {
                    bigger=cur;
                    biggertail=cur;
                    //biggertail=lesstail->next;
                }
                    
                else{
                    
                    biggertail->next=cur;
                    biggertail=biggertail->next;
                }
            }
            cur=cur->next;
        }
        if(bigger!=NULL)
            biggertail->next=NULL;
        
        
        if(less==NULL)
        {
            return bigger;
        }
            
        if(bigger==NULL)
        {
            lesstail->next=NULL;
            return less;
        }
        lesstail->next=bigger;
        return less;
    }
};