#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll  n,s,k;
        cin>>n>>s>>k;
        set<int>st;
        for(int i=0; i<k; i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        int r=0, l=0;
        for(int i=s; i<=n; i++)
        {
            if(!st.count(i))
                break;
            else
            {
                r++;
                if(i==n) r = 1000000000;
            }
        }
        for(int i=s; i>=1; i--)
        {
            if(!st.count(i))
                break;
            else
            {
                l++;
                if(i==1) l = 1000000000;
            }
        }
        cout<<min(l,r)<<endl;

    }
    return 0;
}
