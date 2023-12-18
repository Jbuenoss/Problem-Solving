#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k, val, cont = 0;
    priority_queue<int> ap;
    priority_queue<int> size;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        cin >> val;
        ap.push(val);
    }
    for(int i = 0; i < m; i++){
        cin >> val;
        size.push(val);
    }
    while(!ap.empty() && !size.empty()){
        if(size.top() + k >= ap.top() && size.top() - k <= ap.top()){
            cont++;
            size.pop(); ap.pop();
        }
        else if(size.top() - k > ap.top())        size.pop();
        else if(size.top() + k < ap.top())        ap.pop();
    }
    cout << cont << '\n';
    return 0;
}