#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, con=0;
    cin>>n>>m;
    int arr[m+1]= {0};
    int l, r;
    for(int i=1; i<=n; i++)
    {
        cin>>l>>r;
        for(int j=l; j<=r; j++)
        {
            arr[j]=1;
        }
    }

    for(int i=1; i<=m; i++)
    {
        if(arr[i]==0) con++;
    }
    cout<<con<<endl;

    for(int i=1; i<=m; i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}
