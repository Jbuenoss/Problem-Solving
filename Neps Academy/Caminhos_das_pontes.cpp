#include <bits/stdc++.h>
using namespace std;
#define tam 1010
typedef pair<int,int> pii;
vector<pii> adj[tam];
priority_queue<pii> q;
int dist[tam];
bool vis[tam];
int main(){
    int n, m, s, t, b;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> s >> t >> b;
        adj[s].push_back({t, b});
        adj[t].push_back({s, b});
    }
    for(int i = 0; i <= n+1; i++)       dist[i] = (int)INFINITY;
    dist[0] = 0;
    q.push({0, 0});
    while(!q.empty()){
        int a = q.top().second;
        q.pop();
        if(vis[a])      continue;
        vis[a] = true;
        for(auto z: adj[a]){
            int c = z.first; int w = z.second;
            if(dist[a]+w < dist[c]){
                dist[c] = dist[a]+w;
                q.push({-dist[c], c});
            }
        }
    }
    cout << dist[n+1] << '\n';
    return 0;
}