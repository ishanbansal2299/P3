#include<bits/stdc++.h>
using namespace std;
void b2d(char *c, int len, int power)
{
	int bit;
	if(len==-1)
		return;
	if(len>0)
	{
		bit=len%10;
		
	}
	b2d(c,len-1,power+1,decimal);
}
int main()
{
	char c[128];
	int len;
	int decimal
	cin>>len;
	int power=1;
	for(int i=0;i<len;i++)
		cin>>c[i];
	b2d(c,len-1,power);
}
