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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
        
        unordered_map<int, int> mp; //store frq
        ListNode* ptr = head;
        vector<int> v;
       
        
        while (ptr)
        {
            if (mp.find(ptr->val) != mp.end())
            {
                mp[ptr->val] += 1;
            }
            else
            {
                mp[ptr->val] = 1;
            }
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
     
        reverse(v.begin(), v.end());
        
        ListNode* result = nullptr;
        
        for (int i = 0; i < v.size(); i++)
        {
            if (mp[v[i]] == 1)
            {
                ListNode* temp = new ListNode(v[i]);
                temp->next = result;
                result = temp;
            }
        }
        return result;
    }
};
