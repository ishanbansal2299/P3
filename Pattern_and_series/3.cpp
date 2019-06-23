#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"Enter the number of rows:";
	cin>>n;
	int m=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<m<<" " ;
			m=!m;
		}
		cout<<"\n";
	}
}
