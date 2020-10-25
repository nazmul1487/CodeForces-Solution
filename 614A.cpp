#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;
    set<int>s;
    int q,x,n,c=0,y,j;
    //cin>>q>>x;
    scanf("%d%d",&q,&x);
    for ( int i=0; i<q; i++)
    {
        c=0;
        scanf("%d",&y);
        n=y%x;
step1:
        if (s.find(n) == s.end())
        {
            s.insert(n);
        }
        else
        {
            n=n+x;
            goto step1;
        }
        int k=0;
        for ( auto it =s.begin(); it!=s.end(); it++)
        {
            if (*it != k)
            {
                printf("%d\n",k)  ;
                c=1;
                break;
            }
            k++;
        }
        if (c==0)
            printf("%d\n",k)  ;
    }
    return 0;
}
