#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        int even=0,odd=0,a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd>=x){
            if(x%2) cout<<"YES"<<endl;
            else if(even>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(n==x){
            if(odd%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(odd && even) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


