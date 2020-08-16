#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter N:- ";
	cin>>n;

	cout<<"\n\tSolid Rhombus Pattern\n\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	
	cout<<"\n\tHollow Rhombus Pattern\n\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			cout<<" ";
		}
		if (i==0 or i==n-1)
		{
			for(int j=0;j<n;j++)
			{
			cout<<"*";
			}
			cout<<"\n";
		}
		else
		{
			for(int j=0;j<n;j++)
			{
				if(j==0 or j==n-1) cout<<"*";
				else cout<<" ";
			}
			cout<<"\n";
		}
	}
}
