#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
	char temp=a;
	a=b;
	b=temp;
}
void permute(char a[], int l, int r)
{
	int i;
	if(l==r)
	{
		if(atoi(a)%7==0)
			cout<<a<<endl;
		return;
	}
	for(i=l;i<r;i++)
	{
		swap(a[l],a[i]);
		permute(a,l+1,r);
		swap(a[l],a[i]);
	}
}
int main()
{
	int k;
	cin>>k;
	char a[k+1];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	permute(a,0,k);
}
