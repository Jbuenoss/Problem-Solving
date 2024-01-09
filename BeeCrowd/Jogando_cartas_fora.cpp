#include <bits/stdc++.h>
using namespace std;
queue<int> cards;
int x;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    while(1){
        cin >> x;
        if(x == 0){
            break;
        }
        while(cards.size() != 0){
            cards.pop();
        }
        for(int i = 0; i < x; i++){
            cards.push(i+1);
        }
        cout << "Discarded cards: ";
        while(cards.size() > 1){
            cout << cards.front();
            if(cards.size() > 2){
                cout << ", ";
            }
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }
        cout << '\n' << "Remaining card: " << cards.front() << '\n';
    }
    return 0;
}