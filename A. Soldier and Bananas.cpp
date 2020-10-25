
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,cost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        cost=cost+(i*k);
    }
    if(cost>n)
        cout<<abs(n-cost)<<endl;
     else
            cout<<"0"<<endl;
    return 0;
}
