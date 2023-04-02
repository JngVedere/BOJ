//BOJ 2745 - BRONZE 2
//https://www.acmicpc.net/problem/2745

#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    string N; int B; cin >> N >> B;
    int n = N.length(), b = 1,res = 0;
    for(int i = n-1; i >= 0; i--){
        cout << i << " " <<N[i] << " " << N[i] - 0 << " " << b << "\n";
        if(N[i] < 60) res += (N[i] - 48) * b;
        else res += (N[i] - 55) * b;
        b*=B;
    }
    cout << res;
    return 0;
}