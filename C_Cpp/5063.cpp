//BOJ 5063 - BRONZ 3
//https://www.acmicpc.net/problem/5063
#include <iostream>
using namespace std;
int n,r,e,c;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> r >> e >> c;
        if(r == e-c) cout << "does not matter\n";
        else if(r > e-c) cout << "do not advertise\n";
        else cout << "advertise\n";
    }
}