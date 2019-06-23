#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,space,n,k,space1,a;
	cout<<"Enter the number of rows:";
	cin>>n;
	a=n;
	space=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
		space--;
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
			space1=1;
			for(k=1;k<=space1;k++)
			{
				cout<<" ";
			}
			space1++;
		}
		cout<<"\n";
	}
	space=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
		space++;
		for(j=1;j<=2*(n-i)-1;j++)
		{
			cout<<"*";
			space1=a-1;
			for(j=1;j<=space1;j++)
			{
				cout<<" ";
			}
			space1--;
		}
		cout<<"\n";
	}
}
