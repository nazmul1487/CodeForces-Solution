#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(abs(x-y)%abs(a+b)==0) cout<<abs(x-y)/(a+b)<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
