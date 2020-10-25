    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int  n,con=0;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                arr[j]=-1;
                con++;
            }
            }
        }
        //cout<<con<<endl;
        cout<<n-con<<endl;
          for(int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
        return 0;
    }
