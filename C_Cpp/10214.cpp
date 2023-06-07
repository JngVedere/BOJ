//BOJ 10214 - BRONZ 3
//https://www.acmicpc.net/problem/10214
#include <iostream>
using namespace std;
int n,y,k,ys,ks;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        ys = 0; ks = 0;
        for(int i = 0; i < 9; i++){
            cin >> y >> k;
            ys += y; ks += k;
        }
        if(ys > ks) cout << "Yonsei\n";
        else if(ys < ks) cout << "Korea\n";
        else cout << "Draw\n";
    }
}