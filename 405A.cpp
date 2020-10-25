#include<iostream>
using namespace std;
int main ()
{
    int a,b,i;
    cin>>a>>b;
    int limik=a, bob=b;
    for(i=1; ;i++)
    {
        if(limik*3 > bob*2)
        {
            break;
        }
        else
        {
            limik=limik*3;
            bob = bob*2;
           // cout<<limik<<bob<<endl;
        }
    }
    cout<<i<<endl;
    return 0;
}
