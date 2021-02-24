#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n, i;
    double sum = 0;
    scanf("%d", &n);
    int p[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);;
        sum += p[i];
    }
    printf("%0.12f\n", sum / n);

    return 0;
}
