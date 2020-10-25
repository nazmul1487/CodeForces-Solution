#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    vector<int>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]==1)
        {
            s.push_back(a[i-1]);
        }
    }
    s.push_back(a[n-1]);
    int k = s.size();
    printf("%d\n",k);
    for(int i=0; i<k; i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
