#include<iostream>
#include<vector>
using namespace std;
class Node
{   public:    
      int data;
        Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
Node* CreateList(vector<int>arr,int n)
{
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<n;i++)
    {
        Node* newnode=new Node(arr[i]);
        temp->next=newnode;
        temp=temp->next;

    }
    return head;


}
int AddHelper(Node* temp)
{  
    if(temp==NULL)
      return 1;
      
    int carry=AddHelper(temp->next);
      temp->data+=carry;
      if(temp->data<10)
        return 0;
       temp->data=0; 
      return 1;  
    
}
Node* Addone(Node* head)
{
   int carry=AddHelper(head);
   if(carry==1)
   {
    Node* newnode=new Node(1);
    newnode->next=head;
    head=newnode;
   }
   return head;

}
void Display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
     int n;
    cin>>n;
    vector<int> arr(n);
    cout<<" enter the input of element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      Node* head= CreateList(arr,n);
      cout<<"print the Linked List"<<endl;
      Display(head);
      head=Addone(head);
      cout<<"print after add the one"<<endl;
      Display(head);
}
