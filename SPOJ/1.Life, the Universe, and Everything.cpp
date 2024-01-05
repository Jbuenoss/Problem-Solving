#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cin >> x;
    while(x != 42){
        v.push_back(x);
        cin >> x;
    }
    for(auto x : v)             cout << x << '\n';
    return 0;
}