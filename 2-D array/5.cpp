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
		int max=0;
		for(int j=0;j<m;j++)
		{
			if (a[i][j] > max)
                max = a[i][j];
		}
		cout<<max<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		int maxc=a[0][i];
		for(int j=0;j<n;j++)
		{
			if(a[j][i]>maxc)
				maxc=a[j][i];
		}
		cout<<maxc<<" ";
	}
}
