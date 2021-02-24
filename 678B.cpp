#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,tmp,rem;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2==0) tmp=2;
        else {
            rem = a+1;
            tmp = rem/2;
        }
        int arr[a][a];
        for(int i=a-1;i>=0;i--)
        {
            for(int j=a-1; j>=0; j--)
            {
                if(i==j)
                {
                    arr[i][j]=1;
                }
                else
                {
                    arr[i][j]=tmp;
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
