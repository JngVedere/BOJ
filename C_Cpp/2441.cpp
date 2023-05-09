//BOJ 2441 - BRONZ 3
//https://www.acmicpc.net/problem/2441
#include <iostream>
using namespace std;
int S;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> S;

    for(int i = S; i > 0; i--){
        for(int j = 0; j < S - i;j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}