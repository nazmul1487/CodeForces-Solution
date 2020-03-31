#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,n,k;
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        int a = n-1;
        int b=n;

        for(int i=1;i<k;i++)
        {
            if(a+1 == b)
            {
                a--;
                b=n;
            }
            else
                b--;
        }
        cout<<"A =" <<a<<"B="<<b<<endl;
        for(int i=1;i<=n;i++)
        {
            if(i==a || i==b)
            {
                cout<<'b';
            }
            else
                cout<<'a';
        }
        cout<<endl;
    }
    return 0;
}
