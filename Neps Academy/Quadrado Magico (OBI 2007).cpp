    #include <bits/stdc++.h>
    using namespace std;

    int resultado(int lin[], int col[], int diag[], int n){
        if(diag[0] != diag[1])    return -1; //diag sera a base
        for(int i = 0; i < n; i++){
            if(lin[i] != col[i] || col[i] != diag[1])
                return -1;
        }
        return diag[1];
    }
    int main(){
        int n;
        cin >> n;
        int lin[n], col[n], dia[2]; //dia[0]: principal, dia[1]:secundaria
        for(int i = 0; i < n; i++){ //inicialização
            lin[i] = col[i] = 0;
        }
        dia[0] = dia[1] = 0;
        for(int i = 0; i < n; i++){ //leitura
            for(int j = 0; j < n; j++){
                int aux;
                cin >> aux;
                lin[i] += aux;
                col[j] += aux;
                if(i == j)      dia[0] += aux;
                if(abs(i) + abs(j) == n-1)  dia[1] += aux;
            }
        }
        cout << resultado(lin, col, dia, n);
        
        return 0;
    }