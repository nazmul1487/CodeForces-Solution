#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,str="";
    cin>>n;
    cin>>a;
    int j=0;
    for(int i=0; i<n; i+=j)
    {
        str+=a[i];
        j++;
    }
    cout<<str<<endl;
    return 0;
}
