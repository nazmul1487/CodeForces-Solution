#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a]={0};
        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        int ev=0,od=0;
        for(int i=0; i<a; i++)
        {
           if(i%2==0)
           {
               if(arr[i]%2==1) od++;
           }
           else{
                if(arr[i]%2==0) ev++;
           }
        }
        if(ev!=od) cout<<"-1"<<endl;
        else cout<<od<<endl;
    }
    return 0;
}
