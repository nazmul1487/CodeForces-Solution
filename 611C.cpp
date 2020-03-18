#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tm,l;
    cin>>n;
    int arr[n+1],ar[n+1],m[n+1]={0},mi[n+1]={0};
    for(int i=1,j=0;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            ar[j++]=i;
        }
        if(arr[i]!=0)
        {
            m[arr[i]]=-1;
        }
    }
    l=0;
    for(int i=1;i<=n;i++)
    {
        if(m[i]!=-1)
        {
            mi[l++]=i;
        }
    }
   // cout<<l<<endl;
    for(int i=0,j=0;i<l;i++,j++)
    {
        if(ar[i]==mi[j] && i!=0)
        {
            tm = mi[j];
            mi[j]=mi[0];
            mi[0]=tm;
        }
    }
     for(int i=0,j=0;i<l;i++,j++)
    {
        if(ar[i]==mi[j])
        {
            tm = mi[j];
            mi[j]=mi[l-1];
            mi[l-1]=tm;
        }
    }
    for(int i=1,l=0;i<=n;i++)
    {
        if(arr[i]!=0) cout<<arr[i]<<" ";
        else cout<<mi[l++]<<" ";
    }
    cout<<endl;
    return 0;
}
