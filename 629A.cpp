#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,a,b;
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b;
        if(b>a) {
            cout<<b-a<<endl;        }
        else
        {
            if(a==b || a%b==0) {cout<<"0"<<endl; }
            else
            {
                int tem=b;
                int rem = a/b;
                cout<<(rem+1)*b - a<<endl;

            }
        }


    }
    return 0;
}
