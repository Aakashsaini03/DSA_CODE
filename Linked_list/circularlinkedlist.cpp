#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~node()
    {
        int val=this->data;
        while(this->next!=NULL)
        {
            free(next);
            next=NULL;
        }
    }


};
void insert_begining(node* &head,int d)
{
   node* newnode=new node(d);
   node* ptr;
   if(head==NULL)
   {
    head=newnode;
    head->next=head;
   }
   else
   {
    ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    newnode->next=head;
    ptr->next=newnode;
    head=newnode;
   }

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
    node* node1=new node(12);
    node* head=node1;
    print(head);
    insert_begining(head,23);
    print(head);

}