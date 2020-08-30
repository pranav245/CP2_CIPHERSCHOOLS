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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int n1=0,n2=0;
        ListNode *ptr1=l1,*ptr2=l2;
        long long total=0;
        long long p=0;
        int len1=0;
        
        while(ptr1)
        {
            int val = ptr1->val;
            p+= val * pow(10,len1++);
            ptr1 = ptr1->next;
        }
        total+=p;
        
        p=0;
        len1=0;
        while(ptr2)
        {
            int val = ptr2->val;
            p+= val * pow(10,len1++);
            ptr2 = ptr2->next;
        }
        
        total+=p;
        
        ListNode *head2=new ListNode(0);
        ListNode *temp= head2;
        
       // cout<<total<<"akjdnakjd";
        
        if(total==0)
        {
            //cout<<"asbda";
            head2->next =NULL;
            return head2;
            
        }
        head2->next = temp;
        
        
      //  cout<<"Hello";
        while(total)
        {
            ListNode* n = new ListNode(total%10);
            n->next=NULL;
            total = total/10;
            
            {   
                temp->next = n;
                temp=temp->next;
       //        cout<<total;
            }
           
        }
        
        return head2->next;
    }
};
