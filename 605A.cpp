#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,t1,t2,t3,ans,rem,res;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        if(b>c)
            swap(b,c);
        if(a>b)
            swap(a,b);
        // cout<<a<<b<<c<<endl;
        if(a==b && c-a >=2)
        {
            a++,b++,c--;
        }
        else if(b==c && c-a >=2)
        {
            a++,b--,c--;
        }
        else
        {
            if(a<b)
                a++;
            if(b>a)
                b--;
            if(b<c)
                c--;
        }

        cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl;
    }
    return 0;
}
