#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,t=1000000000;
        scanf("%d",&a);
        vector<int>v(a);
        for(int j=0;j<a;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        for(int j=1;j<a;j++){
            t=min(v[j]-v[j-1],t);
        }
        printf("%d\n",t);
    }
}
