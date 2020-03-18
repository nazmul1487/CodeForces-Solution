#include<bits/stdc++.h>
using namespace std;
int main()
{
    lomg long  n,k,res=0,cnt=0;
    cin>>n>>k;
    string a;
    char ch[65];
    int arr[26]={0};
    cin>>a;

    for(int i=0; i<k; i++)
    {
        cin>>ch[i];
        arr[ch[i]-'a']=1;
    }
//    for(int i=0;i<26;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    for(int j=0; j<a.length(); j++)
    {

        if(arr[a[j]-'a']==1)
        {
            cnt++;
        }
        if(arr[a[j]-'a']==0 )
        {
            res+=(cnt*(cnt+1))/2;
            cnt=0;
        }
    }
    if(cnt!=0)
    {
         res+=(cnt*(cnt+1))/2;
    }
    cout<<res<<endl;
    //main();
    return 0;
}
