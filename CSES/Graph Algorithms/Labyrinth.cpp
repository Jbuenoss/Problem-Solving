#include <bits/stdc++.h>
using namespace std;
bool mapa[1010][1010];
int dist[1010][1010], n, m;
char c, dir[1010][1010], cam[1000000];
int x[] = {1, -1, 0, 0}, y[] = {0, 0, 1, -1};
pair<int, int> com;
pair<int, int> fim;
pair<int, int> temp;
queue<pair<int, int>> q;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            mapa[i][j] = (c == '.');
            if(c == 'A'){
                com.first = i;
                com.second = j;
            }
            if(c == 'B'){
                fim.first = i;
                fim.second = j;
                mapa[i][j] = true;
            }
        }
    }
    dist[com.first][com.second] = 0;
    q.push({com.first, com.second});
    while(!q.empty()){
        int tempx = q.front().first, tempy = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int dx = tempx + x[i], dy = tempy + y[i];
            if(dx >= 0 && dx < n && dy >= 0 && dy < m && mapa[dx][dy]){
                if(i == 0)      dir[dx][dy] = 'D';
                else if(i == 1)     dir[dx][dy] = 'U';
                else if(i == 2)     dir[dx][dy] = 'R';
                else if(i == 3)     dir[dx][dy] = 'L';
                mapa[dx][dy] = false;
                q.push({dx, dy});
                dist[dx][dy] = dist[tempx][tempy]+1;
            }
        }
    }
    temp = {fim.first, fim.second};
    for(int i = dist[fim.first][fim.second]; i != 0; i--){
        cam[i] = dir[temp.first][temp.second];
        if(dir[temp.first][temp.second] == 'U')     temp.first += 1;
        else if(dir[temp.first][temp.second] == 'D')    temp.first += -1;
        else if(dir[temp.first][temp.second] == 'L')    temp.second += 1;
        else if(dir[temp.first][temp.second] == 'R')    temp.second += -1;
    }
    if(mapa[fim.first][fim.second])     cout << "NO" << '\n';
    else{
        cout << "YES" << '\n' << dist[fim.first][fim.second] << '\n';
        for(int i = 1; i <= dist[fim.first][fim.second]; i++)        cout << cam[i];
    }
    cout << '\n';
    return 0;
}