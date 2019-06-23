#include<bits/stdc++.h>
using namespace std;
int d2b(int n, char c[], int index)
{
	if(n==0)
		return 0;
	else
		c[index]=n%2+'0';
		d2b(n/2,c,index+1);
}
int main()
{
	char c[100]={0};
	int n;
	cin>>n;
	d2b(n,c,0);
	cout<<c;
}
