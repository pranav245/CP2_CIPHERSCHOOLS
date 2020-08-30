/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or k==0) return head;
        if(head->next == NULL) return head;
        
        int l=0;
        ListNode *temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        
        k=k%l;
        
        while(k)
        {
            ListNode *p=head;
            while (p->next->next != NULL)
                p = p->next;
            p->next->next = head;
            head = p->next;
            p->next = NULL;
            k--;
        }
     return head;   
    }
};
