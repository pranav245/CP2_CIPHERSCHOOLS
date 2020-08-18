#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter Binary Number:-";
	cin>>n;
	int deci=0;
	
	int temp = n;
	int base=1;
	while(temp>0)
	{
		int last = temp%10;
		temp/=10;
		deci+= last*base;
		base=base*2;
	}
	
	cout<<deci;
	
	
	
}
