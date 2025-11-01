#include<bits/stdc++.h>
using namespace std;
int Countpair(vector<int>&arr,int target)
{
    int n=arr.size();
    int cnt=0;
    sort(arr.begin(),arr.end());
   
    int i=0,j=1;
    while(j<n&&i<n)
    {
        int diff=arr[j]-arr[i];
        if(diff<target)
          j++;
         else if(diff>target)
           i++;
           //difference equal to target
         else{
            int ele1=arr[i],ele2=arr[j];
             int cnt1=0,cnt2=0;
             while(j<n&&arr[j]==ele2)
             {
                cnt1++;
                j++;
             }
             while(i<n&&arr[i]==ele1)
             {
                cnt2++;
                i++;
             }
             
             if(ele1==ele2)
               cnt+=(cnt1*(cnt1-1))/2;
             else
              cnt+=cnt1*cnt2;  


         } 

    }
    return cnt;
}
int main()
{
    int n,target;
    cout<<"Enter trhe size of element "<<endl;
    cin>>n;
    cout<<"Enter the target"<<endl;
    cin>>target;
    vector<int>arr(n);
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"count of pairs are"<<endl;
    int ans=Countpair(arr,target);
    cout<<ans;
}