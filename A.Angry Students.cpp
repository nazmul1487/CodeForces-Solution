#include<iostream>
using namespace std;
int main()
{
    int tst;
    string a;
    cin>>tst;
    for(int i=1; i<=tst; i++)
    {
        int n;
        cin>>n;
        cin>>a;
        int cn=0,mx=0,fl=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]=='A')
            {
                for(int k=j+1;k<n ; k++)
                {
                    if(a[k]=='A') break;
                    if(a[k]=='P')
                    {
                        cn++;
                    }
                }
                mx=max(mx,cn);
                cn=0;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
