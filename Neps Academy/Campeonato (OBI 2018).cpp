#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, x1, x9;
    for(int i = 0; i < 16; i++){
        cin >> x;
        if(x == 1){
            x1 = i;
        } else if(x == 9){
            x9 = i;
        }
    }
    if(x1/2 == x9/2){
        cout << "oitavas";
    } else if(x1/4 == x9/4){
        cout << "quartas";
    } else if(x1/8 == x9/8){
        cout << "semifinal";
    } else{
        cout << "final";
    }
    return 0;
}