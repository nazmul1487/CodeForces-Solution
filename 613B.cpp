#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,ya=0,yd=0, yd1=-2147483647, yd2=-2147483647;
        cin>>a;
        long long int arr[a];
        for(long long int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        for(long long int i=0; i<a; i++)
        {
            ya=ya+arr[i];
        }
        for(long long int i=1; i<a; i++)
        {
            yd=yd+arr[i];
            yd1=max(yd1,yd);
            if(yd<0)
                yd=0;
        }
        yd=0;
        for(long long int i=0; i<a-1; i++)
        {
            yd=yd+arr[i];
            yd2=max(yd2,yd);
            if(yd<0)
                yd=0;
        }
        if(max(yd1,yd2) < ya)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
