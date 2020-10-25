#include<stdio.h>
int main()
{
    int i=5;

    printf("%d",++i);
    printf("%d",i++);
    printf("%d\n",i);
     i=5;
    int ans = (++i) + (i++) +i ;
    printf("%d",ans);
    return 0;
}
