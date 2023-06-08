//BOJ 4153 - BRONZ 3
//https://www.acmicpc.net/problem/4153
#include <iostream>
#include <algorithm>
using namespace std;
int n, cnt, e[3];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        cnt=0;
        for(int i = 0; i < 3; i++){
            cin >> n;
            if(n==0) cnt++;
            e[i] = n*n;
        }
        if(cnt==3) break;
        sort(e, e+3);
        if(e[0]+e[1]==e[2]) cout << "right\n";
        else cout << "wrong\n";
    }
}