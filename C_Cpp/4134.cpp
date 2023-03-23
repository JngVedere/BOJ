//BOJ 41334 - SILVER 4
//https://www.acmicpc.net/problem/4134
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long int a){
    if(a<=1) return false;
    long long int r = (long long int)(sqrt(a));
    for(long long int i = 2; i <= r; i++)
        if (a%i == 0) return false;
    
    return true;
}

long long int next_prime(long long int a){
    if(a<=2) return 2;

    while(true){
        if(is_prime(a)) return a;
        a++;
    }
}

int main(){
    long long int n,T;
    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&n);
        cout << next_prime(n) << "\n";
    }
    return 0;
}