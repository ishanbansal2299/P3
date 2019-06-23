#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
	public:
		T data;
		node *next;
};
int main()
{
	node<int>*head1;
	node<float>*headfloat;
	
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
}

