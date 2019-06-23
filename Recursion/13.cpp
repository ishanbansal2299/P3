#include<bits/stdc++.h>
using namespace std;
int rev(int a[], int begin, int end)
{
	int temp;
	if(begin>=end)
		return 0;
	else
		temp=a[begin];
		a[begin]=a[end];
		a[end]=temp;
		rev(a,begin+1,end-1);
}
int main()
{
	int a[]={1,2,3,4,5};
	int s=sizeof(a)/sizeof(int);
	rev(a,0,s-1);
	for (int i = 0; i < size; i++) 
   		cout << arr[i] << " "; 
}
