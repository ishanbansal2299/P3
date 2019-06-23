#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cout<<"Enter the size:";
	cin>>n;
	bool a[n],b[n];
	cout<<"Enter th element of A:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element of B:"<<endl;
	for(i=0;i<n;i++)
		cin>>b[i];
	cout<<"hamming distance:";
	i=0;
	while(i<n)
	{
		if(a[i]!=b[i])
			count++;
		i++;	
	}
	cout<<count;
}
