//BOJ 11557 - BRONZ 1
//https://www.acmicpc.net/problem/11557
#include <iostream>
using namespace std;
int T, N, L, mn;
string S, ans;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    while(T--){
        mn = -1;
        cin >> N;

        for(int i = 0; i < N; i++){
            cin >> S >> L;
            if(L > mn){
                mn = L;
                ans = S;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}