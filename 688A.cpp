#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m,n;
    while(t--)
    {
        cin>>m>>n;
        int arr[m],arr1[n],a,b,cnt=0;
        for(int i=0;i<m;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++)
            cin>>arr1[j];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr1[j]) cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
