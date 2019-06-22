#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
node *addlists(node *first, node *second)
{
	int carry=0,sum=0;
	node *prev=NULL;
	while(first!=NULL || second!=NULL)
	{
		sum=carry + first?first->data:0 + second?second->data:0;
		carry=sum/10;
		sum=sum%10;
		node *temp=new node();
		temp->data=sum;
		node *newlist=NULL;
		if(newlist==NULL)
			newlist=temp;
		else
			prev->next=temp;
		prev=temp;
		if(first) first=first->next;
		if(second) second=second->next;
		if(carry>0)
		{
			temp->next=carry;
		}
		return newlist;
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
	node *add=NULL;
	node *head1=NULL;
	node *head2=NULL;
	insert(&head1,4);
	insert(&head1,9);
	insert(&head1,7);
	insert(&head1,8);
	insert(&head2,5);
	insert(&head2,9);
	printlist(head1);
	cout<<"\n";
	printlist(head2);
	//reverse(&head1);
	//reverse(&head2);
	add=addlists(head1,head2);
	//reverse(&add);
	cout<<"\n";
	printlist(add);
}
