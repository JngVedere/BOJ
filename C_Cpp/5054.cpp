//BOJ 5054 - BRONZ 2
//https://www.acmicpc.net/problem/5054
#include <iostream>
using namespace std;
int t, n, x, arr[10], mi = 99, ma = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        mi = 99;
        ma = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x > ma) ma = x;
            if(x < mi) mi = x;
        }
        cout << 2*(ma-mi) << "\n";
    }
}