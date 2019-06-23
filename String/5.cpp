#include<bits/stdc++.h>
using namespace std;
int main()
{
	string sh;
	int i, count=1, f, l;
	getline(cin,sh);	
	int len=sh.length();
	f=0;
	l=len-1;
	while(f<l)
	{
		if(sh[f]!=sh[l])
		{
			count=0;
			break;
		}
		else
		{
			f++;
			l--;
		}
	}
	if(count==1)
		cout<<"palindrome";
	else
		cout<<"Not palindrome";
}
