#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, ant = 0, atu;
    long long resp = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> atu;
        if(ant - atu > 0){
            resp += (ant-atu);
            atu = ant;
        }
        ant = atu;
    }
    cout << resp;
    return 0;
}