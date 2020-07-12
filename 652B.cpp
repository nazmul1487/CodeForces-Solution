#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        int one=0,zero=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(one>1)
                {
                    one=0;
                    zero=0;
                }
                else one=0;
                zero++;

            }
            else
            {
                one++;
            }
        }
        if(one==0) cout<<"0"<<endl;
        else{
        for(int i=1;i<=zero;i++)
        {
            cout<<"0";
        }
        for(int i=1;i<=one;i++)
        {
            cout<<"1";
        }
        cout<<endl;
        }
    }
    return 0;
}
