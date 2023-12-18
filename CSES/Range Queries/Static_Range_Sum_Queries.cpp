#include <bits/stdc++.h>
using namespace std;
#define tam 1000000
int v[tam];
long long int s[tam];
int main(){
    int n, q, r1, r2;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(!i)      s[i] = v[i];
        else        s[i] = s[i-1] + 1ll*v[i];
    }
    for(int i = 0; i < q; i++){
        cin >> r1 >> r2;
        cout << s[r2-1] - s[r1-2] << '\n';
    }
    return 0;
}