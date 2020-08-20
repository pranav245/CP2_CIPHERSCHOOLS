/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p1=headA , *p2=headB;
        
        int count=0;
        
        if(p1==NULL or p2==NULL) return NULL;
      
        
        while(p1!=NULL and p2!=NULL and p1!=p2 and count<3)
        {
            if(p1==p2) return p1;
            p1=p1->next;
            p2=p2->next;
            if(p1==p2) return p1;
            
            if(p1==NULL) p1=headB;
            if(p2==NULL) 
            {
                p2=headA;
              count++;
            }     
        }
        return p1;
    }
};
