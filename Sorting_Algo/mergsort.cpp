#include<iostream>
using namespace std;
void sort(int arr[],int L,int m,int R)
{   
    int i,j,k;
    int n1=m-L+1;
    int n2=R-m;
    int Li[n1],Ri[n2];
    for(i=0;i<n1;i++)
    {
        Li[i]=arr[L+i];
    }
    for(j=0;j<n2;j++)
    {
        Ri[j]=arr[m+1+j];
    }
    i=0;j=0; k=L;
    while(i<n1&&j<n2)
    {
        if(Li[i]<=Ri[j])
        {arr[k]=Li[i];
        i++;}
        else
        {
            arr[k]=Ri[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=Li[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=Ri[j];
        j++;
        k++;
    }

}
void mergsort(int arr[],int L,int R)
{
    if(R>L)
    {
        int m=(L+R)/2;
        mergsort(arr,L,m);
        mergsort(arr,m+1,R);
        sort(arr,L,m,R);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,arr[10],L,R;
    cin>>n;
    //L=0;
    //R=n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    mergsort(arr,0,n-1);
    print(arr,n);

}