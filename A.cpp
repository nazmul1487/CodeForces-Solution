#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int casee;
    scanf("%d",&casee);

    for(int i=0;i<casee;i++)
    {
        long int n,d,c,ck=0;

        scanf("%ld%ld",&n,&d);


        if(d<=n)
        {
            printf("Yes\n");
        }
        else{
            long int mid, l, r;

            l = 0;
            r = n;

            while(l<=r)
            {
                mid=(l+r)/2;
                c = (mid+1);
                c = ceil(d/(float)c);
                c = c+mid;
                if(c<=n)
                {
                    ck=1;
                    break;
                }
                else
                {
                    r = mid-1;
                }
            }
            if(ck==0)
            {
                printf("NO\n");
            }
            else printf("YES\n");
        }

    }

    return 0;
}
