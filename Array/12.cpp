#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cout<<"Enter size of array 1:";
	cin>>n;
	cout<<"Enter size of array 2:";
	cin>>m;
	int a[n],b[m],c[n+m];
	cout<<"Enter element of an array1:";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element of an array2:";
	for(i=0;i<n;i++)
		cin>>b[i];
	int k=0;
	i=0;
	j=0;
	while(i<=n && j<=m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	for(i=0;i<n+m;i++)
		cout<<c[i]<<" ";
}
