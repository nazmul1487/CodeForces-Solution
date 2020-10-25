#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        bool valid=1;
        for(int i=0;i<a.size();i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                valid=0;
                break;
            }
        }
        if(valid) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
