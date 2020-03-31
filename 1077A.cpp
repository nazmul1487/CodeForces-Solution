#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tst,a,b,k,x,y,ans;
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            cout <<a*(k/2)-b*(k/2)<< endl;
        }
        else
        {
            cout << a*(k/2 + 1)-b*(k/2)<< endl;
        }
    }
    return 0;
}
