#include <bits/stdc++.h>
using namespace std;
#define tam 1010
typedef pair<int,int> pii;
bool visitados[tam][tam];
int dist[tam][tam];
pii ini;
pii fim;
queue<pii> nodes;
int cx[] = {-1, 1, 0, 0}, cy[] = {0, 0, -1, 1};
int main(){
    int n, m, x;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            visitados[i][j] = (x >= 1);
            if(x == 2)      ini = {i, j};
            if(x == 3)      fim = {i, j};
        }
    }
    nodes.push({ini.first, ini.second});
    dist[ini.first][ini.second] = 1;
    visitados[ini.first][ini.second] = false;
    while(!nodes.empty()){
        pii temp;
        temp = nodes.front();
        nodes.pop();
        for(int i = 0; i < 4; i++){
            int tempx = temp.first + cx[i], tempy = temp.second + cy[i];
            if(tempx >= 0 && tempx < n && tempy >= 0 && tempy < m && visitados[tempx][tempy]){
                nodes.push({tempx, tempy});
                visitados[tempx][tempy] = false;
                dist[tempx][tempy] = dist[temp.first][temp.second]+1;
            }
        }
    }
    cout << dist[fim.first][fim.second] << '\n';
    return 0;
}