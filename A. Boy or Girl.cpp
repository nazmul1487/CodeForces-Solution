#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len = a.length();
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    int con=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]!=0)
            con++;
    }
    if(con%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;

}
