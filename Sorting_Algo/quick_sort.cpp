#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>&arr,int start,int end)
{
    int pivot=arr[end];
    int pos=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<pivot)
         {
            swap(arr[i],arr[pos]);
            pos++;
         }
    }
    swap(arr[pos],arr[end]);
    return pos;
}
void quick_sort(vector<int>&arr,int start ,int end)
{
    if(start>=end)
     return;
    int pivot=Partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);

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
    quick_sort(arr,0,n-1);
    cout<<"Array after sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}