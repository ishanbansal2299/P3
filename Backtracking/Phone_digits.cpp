#include<bits/stdc++.h>
using namespace std;

const char phone[10][6]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void digits(int arr[], int start, char *out, int end)
{
	if(start==end)
	{
		cout<<out<<" ";
		return;
	}
	for(int i=0;i<strlen(phone[arr[start]]);i++)
	{
		out[start]=phone[arr[start]][i];
		digits(arr,start+1,out,end);
		if(arr[start]==0 || arr[start]==1)
			return;
	}
}

int main()
{
	int k;
	cout<<"Enter the number of digits:";
	cin>>k;
	cout<<"Enter the digits:";
	int arr[k];
	for(int i=0;i<k;i++)
		cin>>arr[i];
	char out[k+1];
	out[k]='\0';
	digits(arr,0,out,k);
}
