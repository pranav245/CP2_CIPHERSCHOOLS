#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter N:- ";
	cin>>n;
	cout<<"\n\tSimple Pyramid Pattern\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n\tAfter 180 rotation\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<"  ";
		}
		for(int j=0;j<i+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n\tPrinting Triangle\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<i+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\tNumber Pattern 1\n";
	
	for(int i=0;i<n;i++)
	{
		int cn=1;
		for(int j=0;j<i+1;j++)
		{
			cout<<cn++<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\tNumber Pattern 2\n";
	int cn=1;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<i+1;j++)
		{
			cout<<cn++<<" ";
		}
		cout<<"\n";
	}
	
	
	
	
}
