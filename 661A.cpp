#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n]={0};
        bool valid = 1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                valid = 0;
                break;
            }
        }
        if(valid) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
