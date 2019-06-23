#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"size:";
	cin>>n;
	bool a[n+1],b[n+1];
	cout<<"First binary number:";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Second binary number:";
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		if((a[i]==1 && b[i]==1) || (a[i]==0 && b[i]==0))
		{
			a[i]=0;
		}
		else if((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==0))
			{
				a[i]==1;
			}
	}
	cout<<"X-OR:";
	for(i=0;i<n;i++)
		cout<<a[i];
}
