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
	int i,j;
	int sum=0,sum2=0,count=0;
	for(i=0;i<n;i++)
		sum+=a[i][i];
	for(i=0;i<n;i++)
		sum2+=a[i][n-1-i];
	if(sum!=sum2)
		count++;
	
	for(i=0;i<n;i++)
	{
		int rowsum=0;
		for(j=0;j<m;j++)
		{
			rowsum+=a[i][j];
		}
		if(rowsum!=sum)
			count++;
	}
	for(i=0;i<n;i++)
	{
		int colsum=0;
		for(j=0;j<m;j++)
		{
			colsum+=a[j][i];
		}
		if(colsum!=sum)
			count++;
	}
	if(count!=4)
		cout << "Magic Square";
	else
		cout << "Not a magic Square";
}
