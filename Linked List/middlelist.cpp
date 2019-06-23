#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void printmiddle(node *head)
{
	int count=0;
	node *p1=head;
	node *p2=head;
	if(head!=NULL)
	{
		while(p1->next!=NULL)
		{
			count+=1;
			p1=p1->next;
		}
		cout<<count;
		count=count/2;
		while(count>0)
		{
			p2=p2->next;
			count--;
		}
		cout<<"\n"<<p2->data;
	}
}
void insert(node **head1, int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=NULL;
	if(*head1==NULL)
	{
		*head1=temp;
		return;
	}
	node *last_node=*head1;
	while(last_node->next!=NULL)
	{
		last_node=last_node->next;
	}
	last_node->next=temp;
	return;
}
void printlist(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	node *head=NULL;
	insert(&head,10);
	insert(&head,8);
	insert(&head,11);
	insert(&head,7);
	printlist(head);
	cout<<"\n";
	printmiddle(head);
}
