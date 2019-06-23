#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
void printlevel(node *root, int level)
{
	if(root==NULL)
		return;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	printlevel(root->left,level-1);
	printlevel(root->right,level-1);
}
void printlevelapp(node *root, int level)
{
	if(root==NULL)
		return;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	printlevelapp(root->right,level-1);
	printlevelapp(root->left,level-1);
}
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
	root->left->left=temp2;
	node *temp3=new node();
	temp3->data=5;
	root->right->left=temp3;
	node *temp4=new node();
	temp4->data=6;
	root->right->right=temp4;
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		if(i%2)
			printlevel(root,i);
		else
			printlevelapp(root,i);
	}
}
