#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};

/*void insert(node **head1, int value)
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
}*/

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

int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	node *head=NULL;
	//for(int i=0;i<size;i++)
	//	insert(&head,a[i]);
	for(int i=size-1;i>=0;i--)
		insert_front(&head,a[i]);
	printlist(head);	
}
