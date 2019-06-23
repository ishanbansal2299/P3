#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the range of array:";
	cin>>n;
	int a[n+1];
	cout<<"Enter an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	int temp=a[0];
	for(i=0;i<n;i++)
	{
		if(temp<a[i])
			temp=a[i];
	}
	cout<<"Greatest="<<temp;
}	
