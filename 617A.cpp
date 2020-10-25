#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int od=0,ev=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%2==0) ev++;
            if(a[j]%2!=0) od++;

        }
      //  cout<<od<< ev<<endl;
        if(sum%2!=0) cout<<"YES"<<endl;
        else if(ev==0 || od == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
