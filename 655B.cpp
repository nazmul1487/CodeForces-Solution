#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--) {
        int n, s, re1, re2;
        cin >> n;
        if(n%2==0) {
            cout << n/2 << " " << n/2 << endl;
        }
        else {
            s = sqrt(n)+1;
            re1 = 1;
            re2 = n-1;
            for(int i=3; i<=s; i+=2) {
                if(n%i==0) {
                    re1 = n/i;
                    re2 = n-re1;
                    break;
                }
            }
            cout << re1 <<  " " << re2 << endl;
        }
    }
    return 0;
}
