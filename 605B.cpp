#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int l=0,r=0,u=0,d=0,len=0;
        string a;
        cin>>a;
         len=a.length();
        for(int i=0;i<len;i++)
        {
            if(a[i]=='L') l++;
            if(a[i]=='R') r++;
            if(a[i]=='U') u++;
            if(a[i]=='D') d++;
        }
       // cout<<l<<r<<u<<d<<endl;
        l=min(l,r);
        r=l;
        u=min(u,d);
        d=u;
        if(l==0||r==0)
        {
            u=min(u,1);
            d=u;
        }
         if(u==0||d==0)
        {
            l=min(l,1);
            r=l;
        }
        cout<<l+l+u+u<<endl;
        for(int i=1;i<=l;i++)
        {
            cout<<'L';
        }
         for(int i=1;i<=u;i++)
        {
            cout<<'U';
        }
         for(int i=1;i<=l;i++)
        {
            cout<<'R';
        }
         for(int i=1;i<=u;i++)
        {
            cout<<'D';
        }
        cout<<endl;
    }
    return 0;
}

