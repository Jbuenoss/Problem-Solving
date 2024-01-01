#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m, c;
        cin >> m >> c;
        vector<vector<int>> v;
        v.assign(m, vector<int>());
        for(int j = 0; j < c; j++){
            int x;
            cin >> x;
            v[x%m].pb(x);
        }
        for(int j = 0; j < m; j++){
            cout << j << " -> ";
            for(int k = 0; k < (int)v[j].size(); k++){
                cout << v[j][k] << " -> ";
            }
            cout << "\\" << '\n'; //metacaractere 
        }
        if(i < n-1)     cout << '\n';
    }
    return 0;
}