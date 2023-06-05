//BOJ 14541 - BRONZ 3
//https://www.acmicpc.net/problem/14541
#include <iostream>
using namespace std;
int n, s, t[11] = {0}, tmp, sum;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        sum = 0;
        tmp = 0;
        cin >> n;
        if(n == -1) break;
        for(int i = 1; i <= n; i++){
            cin >> s >> t[i];
            tmp = t[i] - t[i-1];
            sum += s * tmp;
        }
        cout << sum << " miles\n";
    }
    return 0;
}