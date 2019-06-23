#include<iostream>
using namespace std;
int main()
{
	string sh;
	int i;
	getline(cin,sh);
	for(i=0;i<=sh.length();i++)
	{
		if(sh[i]>=97 && sh[i]<=122)
		{
			sh[i]=sh[i]-32;
		}
	}
	cout<<sh;
}
