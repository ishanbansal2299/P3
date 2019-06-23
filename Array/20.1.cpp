#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cout<<"size:";
	cin>>n;
	int a[n];
	cout<<"Array:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Delete element:";
	cin>>x;
	int i;
	for(i=x;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
