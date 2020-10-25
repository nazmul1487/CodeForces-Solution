#include<bits/stdc++.h>
using namespace std;

stack<int> stk;
vector<int>adj[100005];
bool vis[100005];
void dfs(int x)
{
    vis[x]=1;
    for(int i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        if(!vis[y])
        {
            dfs(y);
        }
    }
    stk.push(x);
    return;
}
void dfs_tmp(int x)
{
    vis[x]=1;
    for(int i=0;i<adj[x].size();i++)
    {
        int y=adj[x][i];
        if(!vis[y])
        {
            dfs_tmp(y);
        }
    }
    return;
}

int main()
{
    int tst,x,y,v,e;
    cin>>tst;
    for(int i=1;i<=tst;i++)
    {
        for(int j=0;j<100005;j++)
        {
            adj[j].clear();
            vis[j]=false;
        }
        cin>>v>>e;
        for(int k=1;k<=e;k++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        for(int i=1;i<=v;i++)
        {
            if(!vis[i])
                dfs(i);
        }
        for(int i=0;i<100005;i++)
        {
            vis[i]=false;
        }
        int cn=0;
        while(!stk.empty())
        {
            int top =stk.top();
            if(!vis[top])
            {
                dfs_tmp(top);
                cn++;
            }
            stk.pop();
        }
        cout<<cn<<endl;
    }
    return 0;
}

