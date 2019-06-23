#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	bool prime=true;
	long int m;
	cin>>m;
	for(int i=2;i<m;i++)
	{
		for(int j=0;j<i/2;++i)
		{
			if(n%2==0)
			{
				prime=false;
				break;
			}
		}
		if(prime==true)
			cout<<i;
	} 
}
