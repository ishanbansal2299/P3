#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int i,n;
	float sum,t,x,sinval;
	cout<<"Enter the angle in degree:";
	cin>>x;
	cout<<"Enter the number of iteration:";
	cin>>n;
	x=x*(3.142/180.0);
	t=x;
	sum=x;
	sinval=sin(x);
	for(i=1;i<=n;i++)
	{
		t=((t*(-1)*x*x)/(2*i*(2*i+1)));
		sum=sum+t;
	}
	cout<<"\n"<<sum<<"\n"<<sinval;
}
