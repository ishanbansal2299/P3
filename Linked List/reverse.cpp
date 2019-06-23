#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};
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
	return;.
}
void reverse(node **headptr)
{
	node *prev=NULL;
	node *current=*headptr;
	node *right=(*headptr)->next;
	while(current!=NULL)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}
	*headptr=prev;
}
void printlist(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data;
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
	reverse(&head);
	cout<<"\n";
	printlist(head);
}
