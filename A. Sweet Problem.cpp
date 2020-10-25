#include<bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,maxi,mini;
        cin>>a>>b>>c;
        maxi=max(a,max(b,c));
        mini=(a+b+c)-maxi;
        int res;
        if(maxi>mini)
        {
            cout<<mini<<endl;

        }
        else{
          cout<<(a+b+c)/2<<endl;

        }

    }
}
