#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
              swap(arr[j],arr[j+1]);
        }
        
    }
}
int main()
{
    int n;
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr);
    cout<<"After sorting the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}