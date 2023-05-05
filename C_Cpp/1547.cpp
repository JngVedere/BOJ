//BOJ 1547 - BRONZ 3
//https://www.acmicpc.net/problem/1547
#include <iostream>
using namespace std;

int now = 1;
int M,X,Y;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> M;
    while(M--){
        cin >> X >> Y;
        if(X==now || Y == now){
            if(X == now) now = Y;
            else now = X;
        }
    }
    cout << now;
    return 0;
}