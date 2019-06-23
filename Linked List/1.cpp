#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};

node* great(node *p1, node *p2)
{
    node *result = NULL;
	if (p1 == NULL) 
       	return (p2); 
    else if (p2 == NULL) 
       	return (p1); 
    if (p1->data <= p2->data) { 
       	result = p2; 
       	result->next = great(p1->next, p2->next); 
    } 
    else { 
       	result = p1;
		result->next = great(p1->next, p2->next);  
    } 
    return (result);
}
void large(node **head1, node **head2, node **head)
{
	node *p1=*head1;
	node *p2=*head2;
	if((p1==NULL) || (p2==NULL))
		return;
	*head=great(p1,p2);
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
	node *head1=NULL;
	node *head2=NULL;
	node *head=NULL;
	insert(&head1,5);
	insert(&head1,2);
	insert(&head1,3);
	insert(&head1,8);
	printlist(head1);
	cout<<"\n";
	insert(&head2,1);
	insert(&head2,7);
	insert(&head2,4);
	insert(&head2,5);
	printlist(head2);
	cout<<"\n";
	large(&head1,&head2,&head);
	printlist(head);
}
