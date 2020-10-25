#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            swap(a,b);
        }
        int tem = max(a,b*2);
        cout<<tem*tem<<endl;
    }
    return 0;
}
