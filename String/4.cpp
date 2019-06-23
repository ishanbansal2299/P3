#include<bits/stdc++.h>
using namespace std;
int main()
{
	string sh;
	int i, count=0;
	getline(cin,sh);	
	int len=sh.length();
	char c=sh[0];
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<=i+1;j++)
		{
			if(sh[i]==sh[j])
			{
				count++;
			}
		}
		for(int j=i+1;j<len-1;j++)
		{
			if(sh[i]=sh[j])
			{
				count++;
			}
	    }
	}
	if(count>c)
}
