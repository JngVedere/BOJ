//BOJ 24736 - BRONZE 5
//https://www.acmicpc.net/problem/24736
#include <iostream>
using namespace std;
int T,F,S,P,C;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 2; i++){
        cin >> T >> F >> S >> P >> C;
        cout << 6*T + 3*F + 2*S + P + 2*C << " ";
    }
    return 0;
}