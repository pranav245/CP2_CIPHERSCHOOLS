#include <bits/stdc++.h>
using namespace std;

int equiIndex(vector<int>& nums) {
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(2*temp==sum-nums[i]) return i;
            
            temp+=nums[i];
        }
    return -1;
    }

int main()
{
	vector<int> arr {-7,1,5,2,-4,3};
	
	cout<<equiIndex(arr);
		
}
