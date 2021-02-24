#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,s;
    cin >> a>>b>>s;
    a=fabs(a);
    b=fabs(b);
    long int g=s-(a+b);
    if(a+b>s) cout << "NO";
    else if(g%2==1) cout << "NO";
    else cout << "YES";

}
