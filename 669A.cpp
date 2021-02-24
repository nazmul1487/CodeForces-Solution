#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int on=0,ze=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                on++;
            }
            else ze++;
        }
        if(on>ze){
            if(on&1) on--;
            cout<<on<<endl;
            for(int i=0;i<on;i++) cout<<1<<" ";
            cout<<endl;
        }
        else{
            cout<<ze<<endl;
            for(int i=0;i<ze;i++) cout<<0<<" ";
            cout<<endl;
        }

    }
    return 0;
}
