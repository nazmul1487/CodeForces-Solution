#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int arr[n]={0};
       for(int i=0;i<n;i++)
            cin>>arr[i];
       sort(arr, arr+n);
       int expect=1;
       int cnt=1;
       for(int i=0;i<n;i++)
       {
           if(arr[i]<=expect) cnt = i+2;
           expect++;
       }
       cout<<cnt<<endl;
    }
    return 0;
}
