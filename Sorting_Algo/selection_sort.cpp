#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&arr)
{
    int n=arr.size();
    
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
              index=j;
               
        }
        swap(arr[i],arr[index]);
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
    cout<<endl;

}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the lement of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Output after sorting array"<<endl;
    selection_sort(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}