#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ans=0;
    cin>>n;
    int arr[100007];
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
    for(int i=1;i<=100;i++) {
            ans = max(ans,arr[i]);
    }
    cout<<ans<<endl;

    return 0;
}
