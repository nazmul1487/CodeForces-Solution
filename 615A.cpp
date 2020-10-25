#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int arr[4],res=0,tem=0;
       for(int j=0;j<4;j++)
       {
           cin>>arr[j];
           res=res+arr[j];
       }
         sort(arr,arr+3);
        tem = res/3;
       // cout<<arr[2]<<endl;
        if(res %3==0 && tem>=arr[2])
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
