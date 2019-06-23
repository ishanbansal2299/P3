#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void split(node *head, node **first, node **second)
{
	node *p1=head;
	node *p2=head->next;
	while(p2!=NULL && p2->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
	}
	*first=head;
	*second=p1->next;
	p1->next=NULL;
}
node* merge(node *first, node *second) 
{ 
    node *result = NULL; 
    if (first == NULL) 
        return (second); 
    else if (second == NULL) 
        return (first); 
    if (first->data <= second->data) { 
        result = first; 
        result->next = merge(first->next, second); 
    } 
    else { 
        result = second; 
        result->next = merge(first, second->next); 
    } 
    return (result); 
}
void mergesort(node **headptr)
{
	node *h=*headptr;
	node *first,*second;
	if((h==NULL) || (h->next==NULL))
		return;
	split(h,&first,&second);
	mergesort(&first);
	mergesort(&second);
	*headptr=merge(first,second);
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
	insert(&head,7);
	insert(&head,5);
	insert(&head,10);
	insert(&head,12);
	insert(&head,9);
	insert(&head,1);
	printlist(head);
	cout<<"\n";
	mergesort(&head);
	printlist(head);
}
