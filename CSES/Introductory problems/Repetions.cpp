#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string word;
    cin >> word;
    char ant = word[0];
    int s = 1, maior;
    for(int i = 1; i < (int)word.size(); i++){
        if(word[i] == ant)    s++;
        else{
                ant = word[i], s=1;
        }
        if(s > maior)       maior = s;
    }
    cout << maior << '\n';

    return 0;
}