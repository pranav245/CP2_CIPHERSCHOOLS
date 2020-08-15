class Solution {
public:
    void reverse(vector<int>& nums,int start,int end)
    {
        for(int i=start,j=end-1;i<j;i++,j--)
            swap(nums[i],nums[j]);
    }
    
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n);
        reverse(nums,0,k);
        reverse(nums,k,n);
    }
}; 
