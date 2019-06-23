#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		node *left,*right;
};


bool ifmirror(node *root1,node *root2)
{
	if(root1==NULL && root2==NULL)
		return 1;
	if((root1==NULL) || (root2==NULL))
		return 0;
	if(root1->data == root2->data)
	{
		return (ifmirror(root1->left,root2->right) && ifmirror(root1->right,root2->left));
	}
	else
		return 0;
}


void print(node *root)
{
	if(root==NULL)
		return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
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
	
	//print(root);
	
	node *root1;
	root1=new node();
	root1->data=5;
	
	node *temp4=new node();
	temp4->data=20;
	root1->left=temp4;
	
	node *temp5=new node();
	temp5->data=15;
	root1->right=temp5;
	
	if(ifmirror(root,root1))
		cout<<"Mirror";
	else
		cout<<"Not Mirror";
}
