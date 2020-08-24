class Solution {
public:
    int numSquares(int n) {
        
        vector<int> arr;
        arr.push_back(0);
        arr.push_back(1);
        
        for(int i=2;i<=n;i++)
        {
            int m;
            int min = arr[i-1]+1;
            int j=1;
            while(true)
            {    m=i-pow(j,2);
                if(m>=0)
                {
                    if(min>arr[m]+1)
                        min=arr[m]+1;
                        j+=1;
                }
                else break;
            }
            arr.push_back(min);
        }
        
        for(int i=0;i<=n;i++) cout<<arr[i]<<" ";
        return arr[n];
    }
};
