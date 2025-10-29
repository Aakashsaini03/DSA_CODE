#include<bits/stdc++.h>
using namespace std;
string reverse(string &s)
{
    int n=s.size();
    int l=0;int r=n-1;
    while(l<r)
    {
        if(s[l]==' ')
        {
            l++;
            continue;
        }
        else if(s[r]==' ')
          {
            r--;
            continue;
          }
          else{
            swap(s[l],s[r]);
            l++;
            r--;
          }
    }
    return s;
}
int main()
{
    string s = "internship at geeks for geeks";
    cout<<"After the reverse"<<endl;
    cout<<reverse(s);
}