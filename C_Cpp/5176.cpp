//BOJ 5176 - BRONZ 2
//https://www.acmicpc.net/problem/5176
#include <iostream>
#include <cstring>
using namespace std;
int K, P, M, s, c, p[501] = {0};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> K;
    while(K--){
        memset(p, 0, sizeof(int)*501);
        c = 0;
        cin >> P >> M;
        for(int i = 0; i < P; i++){
            cin >> s;
            if(p[s] == 1) c++;
            else p[s] = 1;
        }
        cout << c << "\n";
    }
}