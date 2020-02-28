#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,res;
        cin>>h>>m;
        res=1440-((h*60)+m);
        cout<<res<<endl;
    }
   // main();
    return 0;
}
