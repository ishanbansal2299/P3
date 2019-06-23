#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void reverse(node **headptr)
{
	int count=0;
	node *p1=*headptr;
	node *p2=*headptr;
	if(*headptr!=NULL)
	{
		while(p1->next!=NULL)
		{
			count+=1;
			p1=p1->next;
		}
		cout<<count;
		count=(count/2)+1;
		while(count>0)
		{
			p2=p2->next;
			count--;
		}
	}
	node *prev=NULL;
	node *current=p2->data;
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
/*int find_k_node(node *head, int k)
{
	node *p1=head;
	if(head!=NULL)
	{
		while(k>0)
		{
			p1=p1->next;
			k--;
		}
	}
	return (p1->data);
}

void ispalindrone(node *head)
{
	int count=0;
	node *p1=head;
	if(head!=NULL)
	{
		while(p1->next!=NULL)
		{
			count+=1;
			p1=p1->next;
		}
		cout<<count;
	}
	int begin=0;
	int end=count;
	while(begin<end)
	{
		if(find_k_node(head,begin)!=find_k_node(head,end))
		{
			cout<<"\n"<<"Not Palindrome";
			return;
		}
		begin++;
		end--;
	}
	cout<<"\n"<<"Palindrome";
}*/
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
	printlist(head);
	cout<<"\n";
	reverse(&head);
	cout<<"\n";
	printlist(head);
}
