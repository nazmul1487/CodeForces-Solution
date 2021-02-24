#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fl=0,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1) fl=1;
    }
    if(fl) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;
    return 0;
}
