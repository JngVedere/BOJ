//BOJ 10569 - BRONZ 3
//https://www.acmicpc.net/problem/10569
#include <iostream>
using namespace std;
int T, V, E;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        cin >> V >> E;
        cout << 2 - V + E << "\n";
    }
}