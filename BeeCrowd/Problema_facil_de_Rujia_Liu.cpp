#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    int k, v;
    vector<vector<int> > seq;
    while(cin >> n >> m){
    seq.assign(1e6, vector<int>()); //inicializando em todo loop
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;                   //prenchimento do vector seq
        seq[x].push_back(i + 1);
    }
    for(int i = 0; i < m; i++){
        cin >> k >> v;
       
        if(seq[v].size() >= k)
        {
            cout << seq[v][k - 1] << '\n';
        }

        else{
            cout << '0\n' << '\n';
        }
    }
    }
    return 0;
}
