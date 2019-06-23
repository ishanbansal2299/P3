#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,sum=0,count=0;
	int a[] = {2,4,6,8,10};
	int n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	sum=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>sum)
			count++;
	}
	cout<<count;
}
