#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={10,5,7,18,6};
	int i,j,found=0;
	int size=sizeof(a)/sizeof(int);
	for(i=0;i<size;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]>a[j])
				found=1;
		}
		if(found==1)
		{
		    for(j=i+1;j<=size-1;j++)
		    {
			    if(a[i]>a[j])
			    { 
					cout<<a[i];
					break;
				}
			}
	    }
	}
}
