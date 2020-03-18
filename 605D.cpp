#include<bits/stdc++.h>
using namespace std;
int LIS(int arr[], int i, int n, int prev)
{
	if (i == n)
		return 0;

	int excl = LIS(arr, i + 1, n, prev);
	int incl = 0;
	if (arr[i] > prev)
		incl = 1 + LIS(arr, i + 1, n, arr[i]);
	return max(incl, excl);
}
int main()
{
   int n;
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<LIS(arr, 0, n, INT_MIN)<<endl;
    return 0;
}
