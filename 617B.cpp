#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans,res,tm,rem;
        cin>>n;
        ans = n;
        while(n>=10)
        {
            rem = n%10;
            tm = n/10;
            ans += tm;
            tm += rem;
            n = tm;

        }
        cout<<ans<<endl;
    }

    return 0;
}
