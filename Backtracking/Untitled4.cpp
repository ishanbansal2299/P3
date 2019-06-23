#include<bits/stdc++.h>
using namespace std;
gstring(char *str, int k)
{
	if(k==-1)
	{
		cout<<s<<endl;
		return;
	}
	else
	{
		s[k]='0';
		gstring(str,k-1);
		s[k]='1';
		gstring(str,k-1);
	}	
}
int main()
{
	int k;
	cin>>k;
	char str[k+1];
	char[k]='\0';
	gstring(str,k-1);
}
