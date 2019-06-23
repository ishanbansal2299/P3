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
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			for(j=0;j<n-1;j++)
				a[j]=a[j+1];
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not present";
	}
	else
	{
		cout<<"Uptated array:";
		for(i=0;i<n-1;i++)
		{
			cout<<a[i];
		}
	}
}
