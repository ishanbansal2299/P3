#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the range of array:";
	cin>>n;
	int a[n+1];
	cout<<"Enter an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	int start, end,count =0;
	cout<<"Enter the start and end range where start<end:"<<endl;
	cin>>start>>end;
	for(i=0;i<n;i++)
	{
		if(start<=a[i] && a[i]<=end)
			count++;
	}
	cout<<count;
}
