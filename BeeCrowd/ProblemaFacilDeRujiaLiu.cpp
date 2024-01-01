#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vc;

int main(){
    int n, m;
    while (cin >> n >> m){
        vc.assign(1e6, vector<int>());
        for (int i = 0; i < n; i++){
            int valor;
            cin >> valor;
            vc[valor].push_back(i + 1);
        }
        for (int i = 0; i < m; i++){
            int k, v;
            cin >> k >> v;
            if ((int)vc[v].size() >= k){
                cout << vc[v][k-1] << '\n';
            } else{
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}