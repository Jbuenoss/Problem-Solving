#include <bits/stdc++.h>
using namespace std;
deque<int> pesos;
int main(){
    int n, x, v, c = 0;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> v;
        pesos.push_back(v);
    }
    sort(pesos.begin(), pesos.end());
    while(!pesos.empty()){
        int soma = pesos.back();
        pesos.pop_back();
        if(!pesos.empty() && soma + pesos.front() <= x)     pesos.pop_front();
        c++;
    }
    cout << c << '\n';
    return 0;
}