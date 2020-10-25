#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,a,b,ck=0;
        cin>>n>>m;
        int ara1[m+5],ara2[n+5],ara3[n+5];
        for(int j=1;j<=n;j++)
        {
            cin>>ara2[j];
            ara3[j] = ara2[j];
        }
        ara3[0] = 0;
        sort(ara3, ara3+n+1);
//        cout<<"re"<<endl;
//        for(int k=1;k<=n;k++)
//        {
//            cout<<ara1[k]<<" ";
//        }
//        cout<<"EEEE"<<endl;
        for(int j=1;j<=m;j++)
        {
            cin>>ara1[j];
        }
        int p=1,o=-1,pp=0,oo=0;
        while(p)
        {
            for(int j=1;j<=m;j++)
            {
                int aa;
                if(ara2[ara1[j]] > ara2[ara1[j]+1])
                {

                    aa = ara2[ara1[j]];
                    ara2[ara1[j]] = ara2[ara1[j]+1];
                    ara2[ara1[j]+1] = aa;
                    pp++;
                }
            }
            //        cout<<"re"<<endl;
//        for(int k=1;k<=n;k++)
//        {
//            cout<<ara1[k]<<" ";
//        }
//        cout<<"EEEE"<<endl;
            if(pp==0)
            {
                break;
            }
            else{
                pp=0;
            }
        }
        //check
        for(int j=1;j<=n;j++)
        {
            if(ara3[j]!=ara2[j])
            {
                ck=1;
            }
        }
        //check
        if(ck==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        ck=0;
    }

    return 0;
}

