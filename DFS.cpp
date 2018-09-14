#include<vector>
using namespace std;

vector<int>adj[100];
int vis[100];

void dfs(int at)
{
    if(vis[at])
        return;
    vis[at]=1;
    for(int i=0; i<vis[at].size(); i++)
        dfs(vis[at][i]);
}
