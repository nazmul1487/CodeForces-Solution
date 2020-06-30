#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(int i=0; i<=a.length()-1; i+=2)
        {
            cout<<a[i];
        }
        cout<<a.back()<<endl;
    }
    return 0;
}
