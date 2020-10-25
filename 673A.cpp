#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n];
        long long int cou=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            cou=cou+(k-a[i])/a[0];
        }
        cout<<cou<<endl;
    }
}
