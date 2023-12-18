#include <bits/stdc++.h>
using namespace std;
int main(){
    string tamanho;
    stack<int> cont;
    int n, diamantes = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tamanho;
        while(!cont.empty()){
            cont.pop();
        }
        diamantes = 0;
        for(int j = 0; j < (int)tamanho.size(); j++){
            if(tamanho[j]== '<'){
                cont.push(1);
            }
            else if((tamanho[j] == '>') && (!cont.empty())){
                cont.pop();
                diamantes++;
            }
        }
        cout << diamantes << '\n';
    }
    return 0; 
}