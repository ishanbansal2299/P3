#include<bits/stdc++.h>
using namespace std;
int max(int a[], int size, int temp ,int i)
{
	if ( i < size )
		return temp;
	else
    	if ( temp < a[i])
          temp = a[i];
		max(a, size, temp, i+1);
}
int main()
{
	int a[]={10,20,25,12,3};
	int s=sizeof(a)/sizeof(int);
	cout<<max(a,s,0,0);
}
