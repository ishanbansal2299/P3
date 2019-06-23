#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,m;
	cout<<"Enter the size of array A:";
	cin>>n;
	cout<<"Enter the size of array B:";
	cin>>m;
	int a[n+1],b[m+1];
	cout<<"Enter th element of A:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element of B:"<<endl;
	for(j=0;j<m;j++)
	{
		cin>>b[j];
	}
	cout<<"Element not present in array B:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==m)
			cout<<a[i]<<" ";
	}
}
