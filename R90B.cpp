#include<bits/stdc++.h>
using namespace std;
//////////////
int main()
{
    int t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int co=0,c1=0;
        int len=a.length();
        for(int i=0; i<len; i++){
            if(a[i]=='1')
            {
                co++;
            }
            else
                c1++;
        }
        if((co==0) || (c1==0)|| (min(co,c1))%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
            cout<<"DA"<<endl;
    }
    return 0;
}
