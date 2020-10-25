#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[30]={0};

        int n,m;
        scanf("%d%d",&n,&m);
        char str[n+5];
        scanf("%s",str);
        int p;
        for(int i=0;i<m;i++)
        {
           scanf("%d",&p);
            for(int j=0;j<p;j++)
            {
                arr[str[j]-'a']++;
            }
        }

        for(int j=0;j<n;j++)
            {
                arr[str[j]-'a']++;
            }

        for(int i=0;i<26;i++)
        {
            printf("%d ",arr[i]);
//            cout<<arr[i]<<" ";
        }
        printf("\n");
    }
}
