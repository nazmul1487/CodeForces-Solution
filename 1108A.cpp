#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    int l1,l2,r1,r2,tm1,tm2;
    while(t--)
    {
        cin>>l1>>r1>>l2>>r2;
        tm1 = l1;
        tm2 = l2;
        if(tm1==tm2)
        {
            tm2 = r2;
        }
     cout<<tm1<<tm2<<endl;
    }
    return 0;
}
