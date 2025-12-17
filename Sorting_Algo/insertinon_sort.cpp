#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&arr)
{
    int n=arr.size();
    
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>key)
              arr[j+1]=arr[j];
             else 
               break; 
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr);
    cout<<"Element of after sorting the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}