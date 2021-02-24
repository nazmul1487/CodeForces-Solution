
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, c = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) c++;
    }
    printf("%d\n", c + 1);
    return 0;
}
