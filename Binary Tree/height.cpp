#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
int height(node *root)
{
	if(root==NULL)
		return 0;
	int left=height(root->left);
	int right=height(root->right);
	if(left<right)
		return right+1;
	else
		return left+1;
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
	root->data=1;
	node *temp=new node();
	temp->data=2;
	root->left=temp;
	node *temp1=new node();
	temp1->data=3;
	root->right=temp1;
	node *temp2=new node();
	temp2->data=4;
	root->left->right=temp2;
	print(root);
	cout<<"\n";
	cout<<height(root);
}
