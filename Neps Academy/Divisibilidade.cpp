#include <bits/stdc++.h>
using namespace std;
int toint(char a){
    return a-'0';
}
int main(){
    string n;
    cin >> n;
    int tam = (int)n.size()-1, soma = 0;
    for(int i = 0; i < (int)n.size(); i++){
        soma += toint(n[i]);
    }
    if(toint(n[tam])%2 == 0)    cout << "S\n";
    else    cout << "N\n";
    if(soma%3 == 0)    cout << "S\n";
    else    cout << "N\n";
    if(toint(n[tam])%5 == 0)    cout << "S\n";
    else    cout << "N\n";
    return 0;
}