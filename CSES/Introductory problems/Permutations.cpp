#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n > 3 || n < 2)
        if (n % 2 == 0){
            int k = n / 2;
            cout << k << ' ';
            for (int i = 0; i < (n/2)-1; i++){
                cout << n-i << ' ' << i+1 << ' ';
            }
            cout << k+1 << '\n';
        } else{ // impar
            int k = (n/2) + 1;
            cout << k << ' ';
            for (int i = 0; i < (n/2); i++){
                cout << n-i << ' ' << i+1 << ' ';
            }
            cout << '\n';
        }
    else
        cout << "NO SOLUTION" << '\n';
    return 0;
}