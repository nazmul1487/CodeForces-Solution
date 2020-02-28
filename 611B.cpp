#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int  c= n/k * k;
        int cl = n%k;
        c =c + min(k/2,cl);
        cout<<c<<endl;
    }
    return 0;
}
