#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
int greater_ride_side(node *head)
{
	node *current = head;
    node *maxnode = head; 
    node *temp; 
  
    while (current != NULL && current->next != NULL)
	{ 
        if (current->next->data < maxnode->data) 
		{ 
            temp = current->next; 
            current->next = temp->next; 
            delete(temp); 
        } 
        else 
		{ 
            current = current->next; 
            maxnode = current; 
        } 
    } 
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
	insert(&head,12);
	insert(&head,15);
	insert(&head,10);
	insert(&head,11);
	insert(&head,5);
	insert(&head,6);
	insert(&head,2);
	insert(&head,3);
	printlist(head);
	cout<<"\n";
	reverse(&head);
	greater_ride_side(head);
	reverse(&head);
	printlist(head);
}
