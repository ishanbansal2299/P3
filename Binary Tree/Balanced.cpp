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
int isbalanced(node *root)
{
	if(root==NULL)
		return 1;
	int lefth=height(root->left);
	int righth=height(root->right);
	if(((lefth-righth)<=1) && isbalanced(root->left) && isbalanced(root->right))
		return 1;
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
	node *temp2=new node();
	temp2->data=21;
	root->left->left=temp2;
	node *temp3=new node();
	temp3->data=17;
	root->right->right=temp3;
	print(root);
	if(isbalanced(root)==1)
		cout<<"Balanced";
	else
		cout<<"Unbalanced";
}
