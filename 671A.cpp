#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool odd = false, even = false;
        for (int i=0; i<n; i++)
        {
            int d = s[i] - '0';
            if (i%2 == n%2) continue;
            if (d%2)    odd = true;
            else        even = true;
        }
        if (n%2)
        {
            if (odd)    cout<<1<<endl;
            else        cout<<2<<endl;
        }
        else
        {
            if (even)    cout<<2<<endl;
            else        cout<<1<<endl;
        }
    }
    return 0;
}
