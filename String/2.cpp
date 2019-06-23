#include<iostream>
using namespace std;
int main()
{
	string sh;
	int i, count=0;
	getline(cin,sh);
	for(i=0;i<sh.length();i++)
	{
		if(sh[i]>=65 && sh[i]<=122)
		{
			continue;
		}
		count++;
	}
	cout<<count;
}
