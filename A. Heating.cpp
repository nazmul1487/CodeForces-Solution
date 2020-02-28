#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c>>sum;
        if(c==1 || sum==1)
        {
            cout<<sum*sum<<endl;
        }
        else
        {
            int cost=0;

            int rem2 = sum%c;
            if(sum%c==0)
            {
                int rem1 = sum/c;
                for( int j=1;j<=c;j++)
                {
                    cost = cost+(rem1*rem1);
                }
                cout<<cost<<endl;
            }
            else
            {
                int arr[c]={0},cost=0;
                for(int i=0,k=0;sum!=0;i++)
                {
                    arr[i]=arr[i]+1;k++; sum--;
                    if(k==c)
                    {
                        i=-1;k=0;
                    }

                }
                for(int i=0;i<c;i++)
                {
                    cost = cost +(arr[i]*arr[i]);
                }
                cout<<cost<<endl;
            }

        }
    }

    return 0;
}
