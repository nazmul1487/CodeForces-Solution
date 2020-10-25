#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int maxi=0,tem=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        tem = tem-a + b;
        if(tem>=maxi) maxi=tem;
    }
    cout<<maxi<<endl;
    return 0;
}
