class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int m=nums[0];
        
        for(int i=0;i<k;i++)
        {   if(nums[i]>m) m=nums[i];
            dq.push_back(nums[i]);
        }
        vector<int> v;
        v.push_back(m);
        for(int i = k;i<nums.size();i++)
        {
            dq.push_back(nums[i]);
            dq.pop_front();
            
            m = *max_element(dq.begin(),dq.end());
            v.push_back(m);
        }
        
        return v;
    }
};
