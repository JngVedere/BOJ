//BOJ 2720 - BRONZ 3
//https://www.acmicpc.net/problem/2720
#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int T,C,q,d,n;
    cin >> T;
    while(T--){
        cin >> C;
        q = C/25; C%=25;
        d = C/10; C%=10;
        n = C/5; C%=5;
        cout << q << " " << d << " " << n << " " << C << "\n";
    }
    return 0;
}