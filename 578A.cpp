
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        if(a[i]=='L')
        {
            arr[i]=1;
        }
        else if(a[i]=='R'){
            arr[n-1]=1;
        }
        else {
            arr[i]=0;
        }
    }
    //cout<<b[n-2];
    for(int j=0;j<10;j++)
    {
        cout<<arr[j];
    }
    cout<<endl;
    return 0;
}
