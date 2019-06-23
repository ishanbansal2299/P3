#include<bits/stdc++.h>
using namespace std;
int pallin(int n, int t)
{
	if(n==0)
		return t;
	else
		t=(t*10)+(n%10);
		return pallin(n/10,t);
}
int main()
{
	int n;
	cin>>n;
	int t=pallin(n,0);
	if(n==t)
    	cout<<"Palindrome";
	else
    	cout<<"Not Palindrone";
}
