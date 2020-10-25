#include<iostream>
using namespace std;
int main()
{
    int t, n, tmp, tm1, x;
    cin>>t;
    while(t--)
    {
        cin>>n >>x;
        tmp=1;
        if(n>=1 && n<=2) cout<<tmp<<endl;
        else {
            tm1 = n-2;
            if(tm1%x==0) cout<<(tm1/x + tmp) <<endl;
            else cout<<(tm1/x + 1 + tmp)<<endl;
        }
    }
    return 0;
}
