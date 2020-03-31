#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    int cnt=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= k)
        {
            cnt++;
            arr[i]=-1;
        }
        else
            break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<= k &&arr[i]!=-1)
            cnt++;
        else
            break;
    }
    cout<<cnt<< endl;

	return 0;
}
