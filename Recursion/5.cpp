#include<bits/stdc++.h>
using namespace std;
int sod(int m, int t)
{
	if(m==0)
		return 0;
	else
		t=m%10;
		return t+sod(m/10,t);
}
int main()
{
	int m;
	cin>>m;
	cout<<sod(m,0);
}
