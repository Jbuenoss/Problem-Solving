#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m, x;
    multiset<int> ms;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        ms.insert(-x);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        if(ms.lower_bound(-x) == ms.end())       cout << -1 << '\n';
        else{
            cout << -(*ms.lower_bound(-x)) << '\n';
            ms.erase(ms.lower_bound(-x));
        }
    }
    return 0;
}