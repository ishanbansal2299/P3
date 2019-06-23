#include<bits/stdc++.h>
using namespace std;
void d2b(int n, char c[], int index)
{
	if(index==-1)
		return;
	c[index]=n%2+'0';
	d2b(n/2,c,index-1);
}
int main()
{
	int n;
	cin>>n;
	char c[32]={0};
	d2b(n,c,31);
	cout<<c;
}
