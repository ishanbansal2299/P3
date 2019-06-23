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
	int k;
	cin>>k;
	char str[k+1];
	gs4(str,0,k);
}
