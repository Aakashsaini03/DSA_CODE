#include<bits/stdc++.h>
using namespace std;
int Possible(vector<int>&arr,int mid,int k)
{
    int ans=0;
    int prev=arr[0];
    int cnt=1;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]-prev>=mid)
        {
            cnt++;
            prev=arr[i];
        }
    }
    return cnt>=k;
}
int aggressiveCows(vector<int>&arr,int k)
{
    int low=1;
    int ans=0;
    int high=*max_element(arr.begin(),arr.end());
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(Possible(arr,mid,k))
        {
            ans=mid;
            low=mid+1;
        }
        else
          high=mid-1;
          
    }
    return ans;

}
int main()
{

        int n;
        cin>>n;
    vector<int>stalls(n);
    for(int i=0;i<n;i++)
    {
        cin>>stalls[i];
    } 
    int k;
    cin>>k;
    int ans = aggressiveCows(stalls, k);
    cout<<"the maximim distance to manage the aggressive cows:\n"<<endl;
    cout << ans;
    return 0;
}

