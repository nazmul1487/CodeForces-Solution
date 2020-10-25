#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int l,fl=-1;
        cin>>l;
        string a,b="",c="";
        cin>>a;
        for (int i = 0; i < a.length(); ++i)
        {
            if (a[i] == '2')
            {
                if (fl == -1)
                {
                    b += "1";
                    c += "1";
                }
                else
                {
                    b += "0";
                    c += "2";
                }
            }
            else if (a[i] == '1')
            {
                if (fl == -1)
                {
                    b += "1";
                    c += "0";
                    fl = 1;
                }
                else
                {
                    b += "0";
                    c += "1";
                }
            }
            else
            {
                b += "0";
                c += "0";
            }
        }
        cout<<b<<endl;
        cout<<c<<endl;
    }
    return 0;
}
