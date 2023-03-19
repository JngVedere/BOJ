//BOJ 9020 - SILVER 2
//https://www.acmicpc.net/problem/9020
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
    for(int i = 2; i <=int(sqrt(n)); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int T,n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = n/2; i>=2; i--){
            if(is_prime(i)&&is_prime(n-i)){
                printf("%d %d\n", i, (n-i));
                break;
            }
        }
    }
    return 0;
}