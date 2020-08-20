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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        vector<int> V;
        
        ListNode *temp;
        ListNode *head = new ListNode(0);
        temp=head;
        
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        while(a!=NULL)
        {
            V.push_back(a->val);
            a=a->next;
        }
        while(b!=NULL)
        {
            V.push_back(b->val);
            b=b->next;
        }
        
        
        sort(V.begin(),V.end());
        
        
        temp=head;
        
        for(int i=0;i<V.size();i++)
        {
            ListNode *n= new ListNode(V[i]);
            temp->next=n;
            temp=temp->next;
        }
        
        return head->next;
	}
};
