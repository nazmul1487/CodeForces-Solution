#include<bits/stdc++.h>
//codeforces div3
#define pb                  push_back
#define m_p                 make_pair
#define ALL(x)              x.begin(), x.end()
using namespace std;

typedef pair<int, int>      pii;
typedef long long           ll;

bool compare(pii f, pii s){
    if(f.first > s.first) return 0;
    if(f.first == s.first){
        if(f.second > s.second) return 0;
        else return 1;
    }else return 1;
}

int main()
{
    int tst;
    cin >> tst;
    while(tst--)
    {
        int n;
        cin >> n;
        vector< pair<int, int> > pt;
        for(int i=0;i<n;i++)
        {
            int x, y;
            cin >> x >> y;
            pt.pb(m_p(x, y));
        }
        sort(ALL(pt), compare);
        int tmx = 0, tmy = 0;
        vector<char>res;
       // for(int i=0;i<res.size();i++)
             //   cout << res[i];
        int flag = 1;
        for(int i = 0; i < n; i++)
        {
            int vx = pt[i].first, vy = pt[i].second;
            //cout<<vx;
            if(tmx > vx)
            {
                flag = 0; break;
            }
            if(vx==tmx)
            {
                if(tmy>vy)
                {
                    flag = 0;
                    break;
                }
                for(int k=1;k<=vy-tmy;k++)
                {
                    res.pb('U');
                }
                tmx = vx;
                tmy = vy;
                //cout<<tmx<<tmy;
            }
            else if(tmy==vy)
            {
                if(tmx>vx)
                {
                    flag = 0; break;
                }
                for(int k=1;k<=vx-tmx;k++)
                {
                    res.pb('R');
                }
                tmx = vx;
                tmy = vy;

            }
            else if(vx > tmx)
            {
                for(int k=1;k<=vx-tmx;k++)
                {
                    res.pb('R');
                }
                if(tmy > vy)
                {
                    flag = 0; break;
                }
                if(vy > tmy)
                {
                    for(int k=1;k<=vy-tmy;k++)
                    {
                        res.pb('U');
                    }
                    tmx = vx;
                    tmy = vy;
                }
            }

        }
        if(flag)
        {
            cout << "YES" << endl;
            for(int i=0;i<res.size();i++)
                cout << res[i];
            cout << endl;
        }
        else
            cout << "NO" << endl;

    }
    return 0;
}
