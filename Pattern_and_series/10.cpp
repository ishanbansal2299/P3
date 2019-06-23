#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,space,n;
	cout<<"Enter the number of rows:";
	cin>>n;
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
		}
		cout<<"\n";
	}
}
