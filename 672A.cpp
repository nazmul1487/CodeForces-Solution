#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n]={0};
        for(int i=0;i<n;i++) cin>>arr[i];
        int fl=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            {
                fl=1;
                break;
            }
        }
        if(fl) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
