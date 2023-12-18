#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, n, v, s1, s2;
    double soma = 0;
    cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>>   pq;
    for(int i = 0; i < n; i++){
        cin >> v;
        pq.push(v);
    }
    for(int i = 0; i < n-1; i++){
        s1 = pq.top(); pq.pop();
        s2 = pq.top(); pq.pop();
        pq.push(s1+s2);
        soma += s1 + s2;
    }
    printf("%.0lf\n", soma);
    return 0;
}