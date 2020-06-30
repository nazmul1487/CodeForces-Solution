#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a<c) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
        if(a*b>c)
        {
            cout<<b<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
