//BOJ 2609 - BRONZ 1
//https://www.acmicpc.net/problem/2609
#include <iostream>
using namespace std;
int A,B,r,s,b,m;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> A >> B;
    if(A < B){ s = A; m = A; b = B;}
    else {s = B; m = B; b = A;}

    while(true){
        r = b % s;
        if(r == 0) break;
        b = s;
        s = r;
    }
    cout << s << "\n" << A * B / s ;

    return 0;
}