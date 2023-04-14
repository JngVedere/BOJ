//BOJ 27433 - BRONZ 5
//https://www.acmicpc.net/problem/27433

#include <iostream>
using namespace std;

typedef long long int ll;

ll factorial(ll n){
    if(n==0||n==1) return 1;
    
    return n * factorial(n-1);
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    ll N; cin >> N;
    cout << factorial(N);
    return 0;
}