#include <bits/stdc++.h>
using namespace std;
int main()
{
    int casee;
    cin>>casee;

    for(int i=0;i<casee;i++)
    {
        int t,ck=0,f=0;
        cin>>t;
        int arr[t+1];

        for(int j=0;j<t;j++)
        {
            cin>>arr[j];
            ck = ck+arr[j];
        }

        if(ck%2!=0)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            if(arr[0]%2==0)
            {
                for(int l=1;l<t;l++)
                {
                    if(arr[l]%2!=0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }

            else
            {
                for(int l=1;l<t;l++)
                {
                    if(arr[l]%2==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
