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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> V;
        ListNode *temp;
        ListNode *head = new ListNode(0);
        temp=head;
        
        for(int i=0;i<lists.size();i++)
        {
            temp=lists[i];
            
            while(temp!=NULL)
            {
                V.push_back(temp->val);
                temp=temp->next;
            }
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
