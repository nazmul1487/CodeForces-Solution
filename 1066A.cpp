#include<bits/stdc++.h>
using namespace std;
int main(){
    int L,v,l,r,tst,res1,res2;
    cin>> tst;
    while(tst--)
    {
        cin>>L>>v>>l>>r;
        res1 = L/v;
        res2 = (r/v) - (l-1)/v;
        cout<<res1-res2<<endl;
    }
    return 0;
}
