#include<iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	char sh[100];
	int i=0, count=0;
	gets(sh);
	int len=strlen(sh);
	while(sh[i]='\0')
	{
		if(sh[i+1]==' ' && sh[i]>=65 && sh[i]<=122)
		{
			count++;
		}
		i++;
	}
	cout<<count+1;
}
