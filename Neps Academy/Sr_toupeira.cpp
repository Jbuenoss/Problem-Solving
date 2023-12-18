#include <bits/stdc++.h>
using namespace std;
int main(){
    int s, t, x, y, p, cont = 0;
    cin >> s >> t;
    int matriz[s][s], n;
    for(int i = 0; i < s; i++)
        for(int j = 0; j < s; j++)
            matriz[i][j] = 0;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        matriz[x-1][y-1] = matriz[y-1][x-1] = 1;
    }
    cin >> p;
    for(int i = 0; i < p; i++){
        cin >> n;
        int vetor[n];
        for(int j = 0; j < n; j++)      cin >> vetor[j];
        bool test = true;
        for(int j = 0; j < n-1; j++)
            if(matriz[vetor[j]-1][vetor[j+1]-1] == 0)
                test = false;
        if(test)    cont++;
    }
    cout << cont << '\n';
    return 0;
}