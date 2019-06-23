#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter element of an array:";
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
	int j=i+1;
	int temp;
	while(i<n-1)
	{
		if(a[i]>0 && a[j]<0)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		i++;
		j++;
	}
	cout<<"Modify array:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
