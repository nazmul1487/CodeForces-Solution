#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int casee;
    cin>>casee;

    for(int i=0;i<casee;i++)
    {
        int n,s,k,m,ck1=0,ck=0;
        cin>>n>>s>>k;

        int arr[n+1]={0};


        for(int j=0;j<k;j++)
        {
            cin>>m;
            arr[m] = -1;
        }

        for(int l=s;l<=n;l++)
        {
            if(arr[l]!=-1)
            {
                break;
            }
            ck++;
            if(l==n)ck=1000000000;
        }

        for(int l=s-1;l>=1;l--)
        {
            if(arr[l]!=-1)
            {
                break;
            }
            ck1++;
            if(l==1)ck1=1000000000;
        }

        cout<<min(ck,ck1)<<endl;

    }

    return 0;
}
