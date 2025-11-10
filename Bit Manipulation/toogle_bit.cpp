#include<bits/stdc++.h>
using namespace std;
int Toggle_bit(int n)
{
    if(n==0)
   {
      cout<<1;
      return 0;
   }
   //find the msb
   int msb=log2(n)+1;
   //// Step 2: create mask with all 1's till MSB
   int mask=(1<<msb)-1;

   //xor of mask and n
   int res=n^mask;
    return res;

}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=Toggle_bit(n);
    cout<<"After the toggle bit:--> "<<ans;
}