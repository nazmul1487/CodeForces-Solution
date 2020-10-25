#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[n],ara1[n]={-1}, ara[m];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int j=1;j<=m;j++)
        {
            cin>>ara[j];
        }
        for(int k=1;k<=n;k++)
        {
            if(arr[k]<arr[k+1])
            {
                ara1[k]=1;
                ara1[k+1]=1;
            }
        }
        for(int k=1;k<=m;k++)
        {
            ara1[ara[k]]=1;
        }
//        cout<<"re"<<endl;
//        for(int k=1;k<=n;k++)
//        {
//            cout<<ara1[k]<<" ";
//        }
//        cout<<"EEEE"<<endl;
int con=0,flag=0;
         for(int k=1;k<=n;k++)
        {
                if(ara1[k!=1])
        }
    return 0;
}
