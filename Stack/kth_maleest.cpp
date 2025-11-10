#include<bits/stdc++.h>
using namespace std;
int kth_smallest_element(vector<int>&arr,int k)

{
    int n=arr.size();
    priority_queue<int>pq;
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
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int k;
    cout<<"Enter the postion"<<endl;
    cin>>k;
    cout<<k<<" smallest element is"<<kth_smallest_element(arr,k);
}