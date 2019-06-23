#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
int delete_alternate(node *head)
{
	node *p1=head;
	node *p2=head->next;
	if(head!=NULL)
	{
		while(p1!=NULL && p2!=NULL)
		{
			p1->next=p2->next;
            delete(p2);
            
            p1=p1->next;
            if(p1!=NULL)
            	p2=p1->next;
		}
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
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
	printlist(head);
	cout<<"\n";
	delete_alternate(head);
	printlist(head);
}
