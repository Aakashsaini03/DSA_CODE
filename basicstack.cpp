#include<iostream>
#include<climits>
#define MAX 5
using namespace std;
class stack
{
    int top;
    int arr[MAX];
    public:
      stack()
      {
        top=-1;
      }
     void push(int value)
     {
        if(top==MAX-1)
          cout<<"Stack is overflow"<<endl;
        else
        {
            arr[++top]=value;
        } 
     }  
     void pop()
     {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;

        }
        cout<<"the pop element is"<<arr[top--]<<endl;
     } 
     void Top()
     {
        if(top==-1)
          cout<<"Stack is empty"<<endl;
        else{
            cout<<arr[top]<<endl;
        }  
     }
     void display()
     {
        if(top==-1)
         cout<<"Stack is Empty"<<endl;
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl; 

     }
};
int main()
{
    stack st;
    int choice;
    int value;
    while(1)
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
              cout<<"Enter the value"<<endl;
              cin>>value;
              st.push(value);
              break;
            case 2:
              st.pop() ;
              break;
            case 3:
              st.Top();
              break;
            case 4:
              st.display();
              break;
            case 5:
               exit(0);  
            default:
             cout<<"condition does not match"<<endl;  
                  
              
        }
    }
}
