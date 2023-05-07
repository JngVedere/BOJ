//BOJ 2010 - BRONZ 3
//https://www.acmicpc.net/problem/2010
#include <iostream>
using namespace std;
int N, t, res = 0;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    res -= N-1;
    
    while(N--){
        cin >> t;
        res += t;
    }

    cout << res;
    return 0;
}