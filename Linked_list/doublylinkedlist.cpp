#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insertionatbegining(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head =temp;
}
void insertattail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    insertionatbegining(head,23); 
     print(head);
     insertionatbegining(head,22); 
     print(head);
     insertionatbegining(head,25); 
     print(head);
     insertattail(tail,12);
     print(head);


}