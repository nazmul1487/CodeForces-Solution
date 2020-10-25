#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[8][8];
    int i, j, black = 0, white = 0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
           cin>>a[i][j];
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (a[i][j] == 'q') black += 9;
            if (a[i][j] == 'r') black += 5;
            if (a[i][j] == 'b') black += 3;
            if (a[i][j] == 'n') black += 3;
            if (a[i][j] == 'p') black += 1;
            if (a[i][j] == 'Q') white += 9;
            if (a[i][j] == 'R') white += 5;
            if (a[i][j] == 'B') white += 3;
            if (a[i][j] == 'N') white += 3;
            if (a[i][j] == 'P') white += 1;
        }
    }
    if(white>black) cout<<"White"<<endl;
    else if(white<black) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
    return 0;
}
