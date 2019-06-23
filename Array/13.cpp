#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter size of arrays:";
	cin>>n;
	int a[n],b[n];
	cout<<"Enter element of an array1:";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element of an array2:";
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0 && b[i]%2==0)
		{
			a[i]=a[i]+b[i];
		}
		else
		if(a[i]%2!=0 && b[i]%2!=0)
		{
			a[i]=a[i]*b[i];
		}
		else
		{
			a[i]=a[i];
		}
	}
	cout<<"Modify array:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
} 
