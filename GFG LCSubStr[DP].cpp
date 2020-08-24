#include<bits/stdc++.h>

using namespace std;


int longestSubString(string s1,string s2)
{
	int m=s1.size();
	int n=s2.size();
	int dp[m+1][n+1];
	int maxL=0;
	
	for(int i=0;i<m+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(i==0 or j==0)
			{
				dp[i][j]=0;
			}
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
				if (dp[i][j]>maxL) maxL = dp[i][j];
			}
			else dp[i][j]=0;
		}
	}
	return maxL;
	
}


int main()
{
	string s1="ABCDEFZY";
	string s2="ZYABCDE";
	
	cout<<longestSubString(s1,s2);
	
}
