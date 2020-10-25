#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int t,q;
    cin>>t;
   // cout<<t<<endl;
    while(t--)
    {
        cin>>q;
        q--;
        cout<<a[q%n]<<b[q%m]<<endl;
    }
    return 0;
}

