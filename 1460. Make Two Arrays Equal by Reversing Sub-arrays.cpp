class Solution {
public:
    
     void reverse(vector<int>& nums,int start,int end)
    {
        for(int i=start,j=end;i<j;i++,j--)
            swap(nums[i],nums[j]);
    }
    
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        for(int i=0;i<target.size();i++)
        {
            bool flag=false;
            for(int j=i;j<arr.size();j++)
            {
                if(target[i]==arr[i])
                {
                    flag=true;
                    break;
                }
                if(target[i]==arr[j]) 
                {   flag=true;
                    reverse(arr,i,j);
                    //for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
                    
                }
            }
            if(flag==false) return false;
        }
        
        return true;
        
    }
};
