#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long arr[1000001]={0};
    arr[1]=1;
    for(long long i=2; i<=1000000; i++)
    {
        if(arr[i]==0)
        {
            for(long long  j=2*i; j<=1000000; j+=i)
                arr[j]=1;
        }
    }
    long long  n;
    cin>>n;
    for(long long  i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        long long  tm;
        tm=sqrt(a);
        if(tm*tm==a)
        {
            if(arr[tm]==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
