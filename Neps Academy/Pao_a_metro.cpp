#include <bits/stdc++.h>
using namespace std;
#define tam 10010
int n, k, m[tam];
bool ref(int meio){
    int soma = 0;
    for(int i = 0; i < k; i++)      soma += m[i] / meio;
    if(soma >= n)   return true;
    else    return false;
}
int bb(int a){
    int ini = 0, fim = a, resp = 0;
    while(ini <= fim){
        int meio = (ini + fim)/2;
        if(ref(meio)){
            ini = meio + 1;
            resp = max(resp, meio);
        }
        else    fim = meio - 1;
    }
    return resp;
}
int main(){
    int a = 0;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> m[i];
        a = max(a, m[i]);
    }
    cout << bb(a) << '\n';
    return 0;
}