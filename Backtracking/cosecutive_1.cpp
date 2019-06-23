#include<bits/stdc++.h>
using namespace std;
void gs3(char *s, int present, int end)
{
	if(present==end)
	{
		s[present]=='\0';
		cout<<s<<endl;
	}
	else
	{
		if(s[present-1]=='1')
		{
			s[present]='0';
			gs3(s,present+1,end);
		}
		else
		{
			s[present]='0';
			gs3(s,present+1,end);
			s[present]='1';
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
	/*star[0]='0';
	gs3(star,1,k);
	star[0]='1';
	gs3(star,1,k);
	*/
}
