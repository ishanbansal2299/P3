#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
int IntesectionNode(int d, node* head1, node* head2);  

int y_detect(node *head1, node *head2)  
{   
    node* current1 = head1;  
    int count1 = 0;  
    while (current1 != NULL)  
    {  
        count1++;  
        current1 = current1->next;  
    }
	int c1 = count1;
    node* current2 = head2;  
    int count2 = 0;  
    while (current2 != NULL)  
    {  
        count2++;  
        current2 = current2->next;  
    }      
    int c2 = count2; 
    int d;  
      
    if(c1 > c2)  
    {  
        d = c1 - c2;  
        return IntesectionNode(d, head1, head2);  
    }  
    else
    {  
        d = c2 - c1;  
        return IntesectionNode(d, head2, head1);  
    }  
} 
int IntesectionNode(int d, node *head1, node *head2)  
{  
    int i;  
    node* p1 = head1;  
    node* p2 = head2;  
      
    for(i = 0; i < d; i++)  
    {  
        if(p1 == NULL)  
        { return -1; }  
        p1 = p1->next;  
    }  
      
    while(p1 != NULL && p2 != NULL)  
    {  
        if(p1 == p2)  
        	cout<<"Y-detect"<<"\n"<<p1->data<<"\n";
        p1 = p1->next;  
        p2 = p2->next;  
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
