//BOJ 5565 - BRONZ 3
//https://www.acmicpc.net/problem/5565
#include <iostream>
using namespace std;
int t, n, R = 9;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(R--){
        cin >> n;
        t -= n;
    }
    cout << t;
}