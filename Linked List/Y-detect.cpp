#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void y_detect(node *head1, node *head2)
{
	node *p1=head1;
	node *p2=head2;
	while(p1!=NULL)
	{
		while(p2!=NULL)
		{
			if(p1==p2)
				cout<<"Y present in linked list";
			p2=p2->next;
		}
		p1=p1->next;
	}
}

int main()
{
	node* newNode;  
    node* head1 =new node();  
    head1->data = 10;  
    
    newNode = new node();  
    newNode->data = 12;  
    head1->next = newNode;
      
    node* head2 =new node();  
    head2->data = 3;  
      
    newNode = new node();  
    newNode->data = 6;  
    head2->next = newNode;  
      
    newNode = new node();  
    newNode->data = 9;  
    head2->next->next = newNode;  
      
    newNode = new node();  
    newNode->data = 15;  
    head1->next->next = newNode;  
    head2->next->next->next = newNode;  
      
    newNode = new node();  
    newNode->data = 30;  
    head1->next->next->next= newNode;  
      
    head1->next->next->next->next = NULL;
    
	y_detect(head1,head2);
}
