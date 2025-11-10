#include<bits/stdc++.h>
using namespace std;
int kth_greatestelement(vector<int>&arr,int k)
{
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
          pq.pop();
    }
    return pq.top();

} 
int main()
{
    int n;
    cout<<"Enter the element number"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the search element"<<endl;
    cin>>k;
    cout<<k<<" greatest element is "<<kth_greatestelement(arr,k);
}