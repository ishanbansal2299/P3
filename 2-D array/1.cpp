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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<a[j][i]<<" ";
		cout<<endl;
	}
}
