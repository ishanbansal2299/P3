#include<bits/stdc++.h>
using namespace std;
void gs4(char *s, int start, int end)
{
	if(start==end)
	{
		s[start]='\0';
		cout<<s<<endl;
	}
	else
	{
		for(int i=1;i<=9;i++)
		{
			s[start]='0'+i;
			gs4(s,start+1,end);
		}
	}
}
int main()
{
	int n,i,count=0;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	char str[k+1];
	gs4(str,0,k);
}
