//BOJ 1100 - BRONZ 2
//https://www.acmicpc.net/problem/1100
#include <iostream>
using namespace std;

bool BOARD[64] = {1,0,1,0,1,0,1,0,
                  0,1,0,1,0,1,0,1,
                  1,0,1,0,1,0,1,0,
                  0,1,0,1,0,1,0,1,
                  1,0,1,0,1,0,1,0,
                  0,1,0,1,0,1,0,1,
                  1,0,1,0,1,0,1,0,
                  0,1,0,1,0,1,0,1};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    char c; int res = 0;

    for(int i = 0; i < 64; i++){
        cin >> c;
        if(BOARD[i]) if(c=='F') res++;
    }
    cout << res;
    return 0;
}