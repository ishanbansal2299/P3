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
	return;
}

void insert_front(node **headptr, int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=*headptr;
	*headptr=temp;
}

void printlist(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}

void insertafter(node *pre_node, int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=pre_node->next;
	pre_node->next=temp;
	return;
}

void delete_node(node **headptr, int key)
{
	node *temp=new node();
	temp = *headptr;
	if(temp->data==key)
	{
		*headptr=temp->next;
		delete(temp);
		return;
	}
	node *prev=temp;
	while(temp->data!=key && temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"Key not found";
		return;
	}
	prev->next=temp->next;
	delete temp;
	return;
}

int main()
{
	node *head=NULL;
	insert(&head,10);
	insert(&head,8);
	insertafter(head,11);
	insert_front(&head,7);
	delete_node(&head,10);
	printlist(head);
}
