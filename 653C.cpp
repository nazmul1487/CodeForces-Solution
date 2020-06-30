#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,con=0,ans=0;
    cin>>t;
    string s;
    while(t--)
    {
        con=0,ans=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                con++;
            }
            if(s[i]==')')
            {
                if(con) {
                    con--;
                }
                else {
                    ans++;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
