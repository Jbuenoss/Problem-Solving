#include <bits/stdc++.h>
using namespace std;

set<string> separ(string leitor){
    set<string> words;
    string w;
    for(auto x : leitor){
        if(x == ' '){
            words.insert(w);
            w = "";
        } else{
            w += x;
        }
    }
    words.insert(w);
    return words;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<string>> r(n);
    for(int i = 0; i < n; i++){
        string leitor;
        getline(cin, leitor);
        set<string> resp = separ(leitor);
        for(auto x : resp){
            r[i].push_back(x);
        }
    }
    for(int i = 0; i < n; i++){
        for(auto it = r[i].begin(); it != r[i].end(); it++){
            cout << *it;
            if(next(it) != r[i].end()){
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}