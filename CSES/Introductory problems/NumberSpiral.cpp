#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t, dif;
    cin >> t;
    for(int i = 0; i < (int)t; i++){
        ll x, y;
        cin >> y >> x;
        y--, x--;
        ll layer = max(y, x);
        ll ini = layer*layer + 1l;
        if(layer%2 == 0){ //[layer, 0] is the start
            dif = abs(layer-y) + x;
        } else{ //[0, layer] is the start
            dif = y + abs(layer-x);
        }
        ll resp = ini + dif;
        cout << resp << '\n';
    }
    return 0;
}