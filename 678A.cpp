#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m,a,sum;
    while(t--)
    {
        sum = 0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            sum += a;
        }
        if(sum==m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
