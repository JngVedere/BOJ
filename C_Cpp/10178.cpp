//BOJ 10178 - BRONZ 3
//https://www.acmicpc.net/problem/10178
#include <iostream>
using namespace std;
int T, d, r, h, t;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        cin >> h >> t;
        d = h / t;
        r = h % t;
        cout << "You get " << d <<" piece(s) and your dad gets " << r << " piece(s).\n";
    }
}