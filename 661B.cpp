#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n];
        long long minia = 1e18, minib = 1e18;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            minia = min(minia , a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            minib = min(minib , b[i]);
        }
        long long res = 0;
        for(int i=0;i<n;i++)
        {
           long long difa = a[i]-minia;
           long long difb = b[i]-minib;
           if(difa<difb){
            swap(difa, difb);

           }
           res+=difb;
           res+=(difa-difb);
        }
        cout<< res << endl;
    }
    return 0;
}
