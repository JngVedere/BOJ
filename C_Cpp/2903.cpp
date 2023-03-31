//BOJ 2903 - BRONZE 3
//https://www.acmicpc.net/problem/2903

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,a=2; cin >> N;
    for(int i = 0; i < N; i++) a+=a-1;
    cout << a*a;
    return 0;
}