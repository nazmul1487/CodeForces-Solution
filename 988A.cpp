#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,con=0,con1=0;
    cin>>n>>k;
    int arr[n+1];
    int ar1[k]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                arr[j]=-1;
                con++;
            }
        }
    }
    if((n-con)>=k)
    {
        cout<<"YES"<<endl;
         for(int i=1; i<=n; i++)
        {
            if(arr[i] != -1)
            {
                con1++;
                cout << i << " ";
            }
            if(con1 >= k)   break;
        }
        cout << endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
