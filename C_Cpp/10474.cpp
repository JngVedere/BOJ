//BOJ 10474 - BRONZ 3
//https://www.acmicpc.net/problem/10474
#include <iostream>
using namespace std;
int f, h, t;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        cin >> h >> t;
        if(h==0 && t==0) break;
        f = h/t;
        h %= t;
        cout << f << " " << h << " / " << t << "\n";
    }
}