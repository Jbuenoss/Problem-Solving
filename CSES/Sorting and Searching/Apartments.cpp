#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k, x, resul = 0;
    cin >> n >> m >> k;
    priority_queue<int> api;
    priority_queue<int> apar;
    for(int i = 0; i < n; i++){
        cin >> x;
        api.push(x);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        apar.push(x);
    }
    while(!api.empty() && !apar.empty()){
        if(apar.top()+k >= api.top() && apar.top()-k <= api.top()){
            apar.pop();
            api.pop();
            resul++;
        } else if(apar.top() > api.top()+k){
            apar.pop();
        } else{
            api.pop();
        }
    }
    cout << resul << '\n';

    return 0;
}