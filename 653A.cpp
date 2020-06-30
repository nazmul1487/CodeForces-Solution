#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n,k;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int tem=0;
        cin>>x>>y>>n;
        tem = (n/x);
        tem = tem * x;
        if(n<tem+y)
        {
            tem = tem - x;
        }
        cout<<tem+y<<endl;
    }

    return 0;
}
