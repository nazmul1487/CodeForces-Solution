#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[5000];
    int flag = 0;
    scanf("%s", str);
    for(int i = 0;i<strlen(str);i++)
    {
        if(str[i]=='7' or str[i]=='4')
        {
            flag++;
        }
    }
    if(flag==7 or flag == 4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
