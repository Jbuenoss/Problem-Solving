#include <bits/stdc++.h>
using namespace std;
int main(){
    map<double, double> votos;
    int n;
    cin >> n;
    double x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(!votos.count(x))        votos[x] = 1;
        else        votos[x]++;
    }
    votos[0] = 0;
    x = 0;
    for(auto par:votos)
        if(par.second > votos[x])        x = par.first;
    printf("%.0lf", x);
    return 0;
}