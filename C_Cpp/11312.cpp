//BOJ 11312 - BRONZ 3
//https://www.acmicpc.net/problem/11312
#include <iostream>
using namespace std;
int T;
long long A, B, C;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        cin >> A >> B;
        C = A/B;
        cout << C*C << "\n";
    }
}