#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++) cin>>a[i];
        sort(a,a+2*n);
        cout<<a[n]-a[n-1]<<endl;

    }
    return 0;
}
