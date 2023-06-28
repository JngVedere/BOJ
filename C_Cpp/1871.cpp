//BOJ 1871 - BRONZ 2
//https://www.acmicpc.net/problem/1871
#include <iostream>
#include <cmath>
using namespace std;
char a, _;
int T, n, as, ns, r;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        as = 0;
        for(int i = 0; i < 3; i++){
            cin >> a;
            as += ((a - 'A') * pow(26,2-i));
        }
        cin >> _;
        cin >> ns;
        r = abs(as - ns); 
        cout << (r > 100 ? "not nice\n" : "nice\n");
    }
}