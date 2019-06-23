#include<bits/stdc++.h>
using namespace std;
void powerset(char *str, int position, int len, char *outs)
{
	if(position==len)
	{
		cout<<outs<<endl;
		return;
	}
	powerset(str,position+1,len,outs);
	for(int i=0;i<len;i++)
		outs+=str[i];
	powerset(str,position+1,len,outs);
}
int main()
{
	char str[]="abc";
	int len = strlen(str);
	char outs[100]=" ";
	powerset(str,0,len,outs);
}
