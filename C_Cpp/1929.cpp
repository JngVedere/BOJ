//BOJ 1929 - SILVER 3
//https://www.acmicpc.net/problem/1929
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n,T;
    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&n);
        cout << next_prime(n) << "\n";
    }
    return 0;
}