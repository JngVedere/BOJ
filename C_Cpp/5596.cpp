//BOJ 5596 - BRONZ 2
//https://www.acmicpc.net/problem/5596
#include <iostream>
using namespace std;
int t[2] = {0}, s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> s;
            t[i] += s;
        }
    }

    cout << (t[0] > t[1] ? t[0] : t[1]);
}