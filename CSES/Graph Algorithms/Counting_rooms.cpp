#include <bits/stdc++.h>
using namespace std;
#define tam 1000
bool mapa[tam][tam];
int n, m, cont = 0;
char l;
int x[] = {0, 0, -1, 1}, y[] = {1, -1, 0, 0};
int dx, dy;
void dfs(int a, int b){
    mapa[a][b] = false;
    for(int i = 0; i < 4; i++){
        dx = a+x[i];
        dy = b+y[i];
        if(dx < n && dx >=0 && dy < m && dy >= 0 && mapa[dx][dy])       dfs(dx, dy);
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> l;
            mapa[i][j] = (l == '.');
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mapa[i][j]){
                dfs(i, j);
                cont++;
            }
        }
    }
    cout << cont << '\n';
    return 0;
}