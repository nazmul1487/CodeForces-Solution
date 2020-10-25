#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int n,m;
        cin>>n>>m;
        int a,b,c,d;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b>>c>>d;
            if(b==c) flag=1;
        }
        if(flag==1 && m%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
