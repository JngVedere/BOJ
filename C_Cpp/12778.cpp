//BOJ 12778 - BRONZE 2
//https://www.acmicpc.net/problem/12778
#include <iostream>
using namespace std;
int T, M, i1;
char K, i2;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    while(T--){
        cin >> M >> K;
        if(K=='C'){
            for(int i = 0; i < M; i++){
                cin >> i2;
                cout << i2 - 'A' + 1 << " ";
            }
            cout << "\n";
        }else{
            for(int i = 0; i < M; i++){
                cin >> i1;
                cout << (char)(i1 + 'A' - 1) << " ";
            }
            cout << "\n";
        }
    }
}