#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=1;
	cout<<"Enter size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter element of an array:";
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
	int j=n-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			count=0;
			break;
		}
		else
		{
			i++;
			j--;
		}
	}
	if(count==1)
		cout<<"palindrome";
	else
		cout<<"Not palindrome";
}
