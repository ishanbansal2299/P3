#include<bits/stdc++.h>
#include<iostream>
using namespace std;
template <class T1, class T2>
T2 mul(T1 a, T2 b)
{
	return (T2)a*b;
}
int main()
{
	cout<<mul<int,float>(3,8.8)<<"\n";
	cout<<mul<float, int>(8.8,3);
}
