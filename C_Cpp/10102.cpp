//BOJ 10102 - BRONZ 3
//https://www.acmicpc.net/problem/10102
#include <iostream>
using namespace std;
int n, cnt[2] = {0};
char c;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> c;
        cnt[c-'A']++;
    }

    if(cnt[0] == cnt[1]) cout << "Tie";
    else if(cnt[0] > cnt[1]) cout << 'A';
    else cout << 'B';
}