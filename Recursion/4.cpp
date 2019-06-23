#include<bits/stdc++.h>
using namespace std;
int mult(int m, int n)
{
	if(n==0)
		return 1;
	else
		return m*mult(m,n-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<mult(m,n);
}
