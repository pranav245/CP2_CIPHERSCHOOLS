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
    ListNode* sortList(ListNode* head) {
        if (head == NULL)
            return head;
        if (head->next == NULL)
            return head;
        
        vector<int> v;
        ListNode* ptr = head;
        while (ptr)
        {
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        sort(v.begin(), v.end());
        vector<int>::iterator itr = v.begin();
        ptr = head;
        while (ptr)
        {
            ptr->val = *itr++;
            ptr = ptr->next;
        }
        return head;
    }
        
    
};
