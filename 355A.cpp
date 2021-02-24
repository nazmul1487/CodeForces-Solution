#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,coun=0;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a<=h) coun+=1;
        else coun+=2;
    }
    cout<<coun<<endl;
    return 0;
}
