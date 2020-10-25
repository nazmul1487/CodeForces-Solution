#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    int n,m,k;
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m>>k;
        int card = n/k;
        if(card>=m) cout<<m<<endl;
        else
        {
            int baki_mem = k-1;
            int temp = (m-card)/baki_mem;
            if( (m-card)%baki_mem !=0 )
            {
                temp++;
            }
            cout<<card-temp<<endl;

        }
    }
    return 0;
}
