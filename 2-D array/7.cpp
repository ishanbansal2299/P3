#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the size of row:";
	cin>>n;
	cout<<"Enter the size of column:";
	cin>>m;
	int a[n][m];
	cout<<"Enter the 2-D array:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int maxSum = INT_MIN;
	int minSum = INT_MAX;
	int index=-1;
	int index1=-1;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
		if(sum>maxSum)
		{
			maxSum=sum;
			index=i;
		}
		
		int sum1=0;
		for(int j=0;j<m;j++)
		{
			sum1+=a[i][j];
		}
		if(sum1<minSum)
		{
			minSum=sum1;
			index1=i;
		}
	}
	cout<<index1<<endl<<index;
}
