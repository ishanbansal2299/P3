#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"size:";
	cin>>n;
	int a[n];
	cout<<"Enter array:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int temp,i,j;
	for(i=0;i<1;i++)
	{
		temp=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
