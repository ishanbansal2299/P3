#include<iostream>
using namespace std;
int main()
{
	int i,n,temp;
	cin>>n;
	int a[n+1];
	for(i=0;i<n;i++)
		cin>>a[i];
	int j=n-1;
	for(i=0;i<j;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
