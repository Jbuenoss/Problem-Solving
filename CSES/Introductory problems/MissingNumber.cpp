#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n-1; i++)      cin >> vetor[i];
    sort(vetor, vetor+n-1);
    if(vetor[n-2] != n)     cout << n << '\n';      //cuidado com o acesso do vetor
    else 
        for(int i = 0; i < n-1; i++)
            if(vetor[i] != i+1){    
                cout << i+1 << '\n';
                break;
            }
    return 0;
}