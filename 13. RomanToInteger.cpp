class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int> Map;
        Map['I']=1;
        Map['V']=5;
        Map['X']=10;
        Map['L']=50;
        Map['C']=100;
        Map['D']=500;
        Map['M']=1000;
        
        int n=0;
        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size())
            {
                if(Map[s[i]]>=Map[s[i+1]])
                {
                    n+= Map[s[i]];
                }
                else 
                {
                    n=n+Map[s[i+1]] - Map[s[i]];
                    i++;
                }
            }
            else 
            {
                n+=Map[s[i]];

            }
        }
        return n;
    }
};
