#include<bits/stdc++.h>
using namespace std;
int check(int arr[], int i, int j, int size, int n)
{
	if(j==size)
		return 0;
	if(arr[i]+arr[j]==n)
		return 1;
	return check(arr,i,j+1,size,n);
}
int main()
{
	int n;
	cin>>n;
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int size=sizeof(arr)/sizeof(int);
	int i,c=0;
	for(i=0;i<size;i++)
	{
		if(check(arr,i,i+1,size,n))
			c++;
	}
	if(c)
		cout<<"Yes";
	else
		cout<<"No";
}
