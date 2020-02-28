#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    float d=0.0;

    while(t<=n)
    {
        d = d+(1/(float)t);
        t++;
    }
    cout<<setprecision(12)<<d<<endl;

    return 0;
}
