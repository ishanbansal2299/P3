#include<bits/stdc++.h>
using namespace std;
int main()
{
	string sh;
	int i, f, l;
	getline(cin,sh);	
	int len=sh.length();
	f=0;
	l=len-1;
	for(i=0;i<len-1;i++)
	{
		char temp=sh[f];
		sh[f]=sh[l];
		sh[l]=temp;
		f++;
		l--;
	}
	cout<<sh;
}
