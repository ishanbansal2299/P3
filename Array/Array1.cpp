#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,n,elem;
	cout<<"Size of array:";
	cin>>n;
	cout<<"Add element in array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the search Element:";
	cin>>elem;
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			break;
		}
	}
	if(i<n)
	{
		cout<<"Element "<<elem<<" at index "<<i;
	}
	else
	{
		cout<<"Element not present in array";
	}
}
