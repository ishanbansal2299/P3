#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i+=2)
	{
		for(j=1;j<=5;j--)
		{
			if(j>i)
			{
				cout<<" ";
			}
			else
			{
				cout<<k++;
			}
			cout<<"\n";
		}
	}
}
