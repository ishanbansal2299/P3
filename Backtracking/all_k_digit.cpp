#include<bits/stdc++.h>
using namespace std;
void gs3(char *s, int present, int end)
{
	if(present==end)
	{
		s[present]=='\0';
		if(s[0]!='0')
			cout<<s<<endl;
	}
	else
	{
		for(int i=0;i<=9;i++)
		{
			s[present]='0'+i;
			gs3(s,present+1,end);
		}
	}
}
int main()
{
	int k;
	cin>>k;
	char star[k+1];
	gs3(star,0,k);
}
