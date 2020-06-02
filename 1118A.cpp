#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long q,ans,n,a,b;
    cin>>q;
    while(q--)
    {
        ans=0;
        cin>>n>>a>>b;
        if(b<2*a)
        {
            ans+=(n/2)*b;
            if(n%2)
                ans+=a;
        }
        else
            ans+=(n*a);
        cout<<ans<<endl;
    }
    return 0;
}
