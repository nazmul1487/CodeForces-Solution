#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int con=0,n;
        cin>>n;
        while(1<n)
        {
            if(n%6==0)
            {
                n/=6;
            }
            else
                n*=2;

            con++;
        }
        if(n==1) cout<<con<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
