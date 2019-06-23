#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
void path(node *root, int arr[], int len)
{
	if(root==NULL)
		return;
	arr[len]=root->data;
	len++;
	if(root->left==NULL && root->right==NULL)
	{
		for (int i = 0; i < len; i++)  
    	{  
        	cout << arr[i] << " ";  
    	}  
    	cout<<endl; 
	}
	else
	{
		path(root->left,arr,len);
		path(root->right,arr,len);
	}
}
int main()
{
	node *root;
	root=new node();
	root->data=5;
	node *temp=new node();
	temp->data=15;
	root->left=temp;
	node *temp1=new node();
	temp1->data=20;
	root->right=temp1;
	node *temp2=new node();
	temp2->data=21;
	root->left->left=temp2;
	node *temp3=new node();
	temp3->data=17;
	root->right->right=temp3;
	int arr[1000];
	path(root,arr,0);
}
