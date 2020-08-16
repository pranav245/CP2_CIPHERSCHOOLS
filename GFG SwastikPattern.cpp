#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter odd Number:- ";
	cin>>n;

	cout<<"\n\tSwastik Pattern\n\n";
	
	for(int i = 0 ;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==n/2) cout<<" * ";
			else if(i<n/2)
			{
				if(j==0 or j==n/2) cout<<" * ";
				else if (i==0 and j>n/2) cout<<" * ";
				else if(j<n/2) cout<<"   ";
			}
			else
			{
				if(j==n-1 or j==n/2) cout<<" * ";
				else if(i==n-1 and j<n/2) cout<<" * ";
				else  cout<<"   ";
			}
		}
		cout<<"\n";
	}
	
	
}
