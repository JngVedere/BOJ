//BOJ 10181 - BRONZ 1
//https://www.acmicpc.net/problem/10181

// 9506과 동일
#include <iostream>
using namespace std;
int n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        cin >> n;
        if(n == -1) break;
        else if(n == 6) cout << "6 = 1 + 2 + 3\n";
        else if(n==28) cout << "28 = 1 + 2 + 4 + 7 + 14\n";
        else if(n==496) cout << "496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248\n";
        else if(n==8128) cout << "8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064\n";
        else cout << n << " is NOT perfect.\n";
    }
    
    return 0;
}