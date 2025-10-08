#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
void Nextgreater(vector<int>&vec)
{
    vector<int>v(vec.size(),-1);
    stack<int>st;
    for(int i=vec.size()-1;i>=0;i--)
    {
        while(!st.empty()&&st.top()<=vec[i])
            {
                st.pop();
                }
        if(!st.empty())
          v[i]=st.top();
        
        st.push(vec[i]);   

    }
    vec=v;

    
}
int main()
{
    vector<int>vec1(4);
    for(int i=0;i<4;i++)
    {
        cin>>vec1[i];
    }
    
    Nextgreater(vec1);  
    for(int i=0;i<4;i++)
    {
        cout<<vec1[i]<<" ";
    }  
    return 0;

}