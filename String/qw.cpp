#include <iostream>
using namespace std;
int recursive(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return (a*recursive(a,b-1))%1000000007;
    }
}

int main() {
	int t,a,b;								
	//cout << "Input number is " << endl;
	//cin >> t;	
	//for(int i=0; i<t; i++)
	    cin>>a>>b;
	cout<<recursive(a,b);
}
