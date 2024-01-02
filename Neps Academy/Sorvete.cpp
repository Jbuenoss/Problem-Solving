#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> vector;
    int p, s;
    cin >> p >> s;
    int u, v;
    for(int i = 0; i < s; i++){      
        cin >> u >> v;
        vector.push_back({u, v});
    }
    sort(vector.begin(), vector.end());     //A saída deve começar do menor ponto inicial
    for(int i = 0; i < (int)vector.size(); i++){
        for(int j = i+1; j < (int)vector.size(); j++){
            if(max(vector[i].first, vector[j].first) <= min(vector[i].second, vector[j].second)){ //verificando se há sobreposição
                vector[i].first = min(vector[i].first, vector[j].first);
                vector[i].second = max(vector[i].second, vector[j].second);
                vector.erase(vector.begin()+j);   
                j--;        //para comparar com o novo intervalo da posição nova.
            }
        }
    }
    for(auto x : vector)        cout << x.first << ' ' << x.second << '\n';
    return 0;
}