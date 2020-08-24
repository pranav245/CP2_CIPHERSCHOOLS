class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
       if(!stones.size()) return 0;
        
        int a,b;
            
            
        while(stones.size()>1)
        {
            int n=stones.size() - 1;
            sort(stones.begin(), stones.end());
            a=stones[n];
            b=stones[n-1];
            
            if(a==b)
            {
                stones.pop_back(); 
                stones.pop_back();
            }   
            if(a>b)
            {
                stones.pop_back();
                stones.pop_back();
                stones.push_back(a-b);
            }
        }
        if (stones.size()==0) return 0;
        return stones[0];
        
    }
};
