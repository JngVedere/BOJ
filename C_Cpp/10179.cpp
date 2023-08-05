//BOJ 10179 - BRONZ 3
//https://www.acmicpc.net/problem/10179
#include <iostream>
using namespace std;
int T;
double o;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cout.precision(2);
    cout << fixed;
    cin >> T;
    while(T--){
        cin >> o;
        cout << "$"<< o * 8 / 10 << "\n";
    }
}