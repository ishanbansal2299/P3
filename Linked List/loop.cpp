#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void loop(node *head)
{
	node *p1=head;
	node *p2=head;
	if(head!=NULL)
	{
		while(p2!=NULL)
		{
			if(p1==p2)
			{
				cout<<"Loop";
				return;
			}
			else
			{
				p1=p1->next;
				p2=p2->next->next;
			}
		}
		if(p1==p2)
			cout<<"Loop";
			return;
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
	insert(&head,19);
	insert(&head,8);
	insert(&head,10);
	head->next->next->next->next->next=head->next->next;
	loop(head);
}
