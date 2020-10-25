#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<max(max(a,b),c)<<endl;
    }
    return 0;
}
