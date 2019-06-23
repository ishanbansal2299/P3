#include<bits/stdc++.h>
using namespace std;
int reverse(int n, int t)
{
	if(n==0)
		return t;
	else
		t=(t*10)+(n%10);
		return reverse(n/10,t);
}
int main()
{
	int n;
	cin>>n;
	cout<<reverse(n,0);
}
