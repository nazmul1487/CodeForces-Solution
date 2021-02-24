#include<iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int hm = (int)s.size();
       // cout<<(s[0]-'0'-1)<<endl;
        cout<<(s[0]-'0'-1)*10+hm*(hm+1)/2<<"\n";
    }
    return 0;
}
