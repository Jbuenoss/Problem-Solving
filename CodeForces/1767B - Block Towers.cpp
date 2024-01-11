#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios::sync_with_stdio(0), cin.tie(0);
    int t;
    int n;
    long long x;
    cin >> t;
    priority_queue<long long, vector<long long>, greater<long long>> pqm;
    for(int i = 0; i < t; t++){
        cin >> n;
        long long a1;
        cin >> a1;
        for(int j = 0; j < n-1; j++){
            cin >> x;
            pqm.push(x);
        }
        while(!pqm.empty()){
            if(a1 < pqm.top()){
                if((pqm.top()-a1) % 2 == 0){
                    a1 += (pqm.top()-a1)/2;
                    pqm.pop();
                }else{
                    a1 += (pqm.top()-a1)/2 + 1;
                    pqm.pop();
                }
            }else{
                pqm.pop();
            }
        }
        cout << a1 << '\n';
    }


    return 0;
}