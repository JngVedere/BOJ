//BOJ 9076 - BRONZ 2
//https://www.acmicpc.net/problem/9076
#include <iostream>
#include <algorithm>
using namespace std;
int t, score[5], tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while(t--){
        tmp = 0;
        for(int i = 0; i < 5; i++) cin >> score[i];
        sort(score, score + 5);
        if(score[3]-score[1] >=4) cout << "KIN\n";
        else{
            for(int i = 1; i < 4; i++) tmp += score[i];
            cout << tmp << "\n";
        }
    }
}