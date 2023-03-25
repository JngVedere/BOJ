//BOJ 17103 - SILVER 2
//https://www.acmicpc.net/problem/17103

//1st try with sqrt(N) looping -> Time Out
//2nd try idea ->
//  1. Sieve of Eratosthenes under 500,000 and saves it in an array.
//  2. using iterator, check is in it eratosthenes. for example for index i : eratoes. (i in eratos) && (n-i in eratos) -> true : sum++

#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

uint32_t arr[15625] = {1431655765,}; //bit set all even number is 0. odd number is 1

bool is_prime(int n){
    if(n<=1) return false;
    int r = (int)sqrt(n);
    for(int i = 2; i <= r;i++)
        if(!(n%i)) return false;
    return true;
}

int goldbach_partition(int n){
    
}

int main(){
    cout << bitset<32>(1431655765);
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        printf("%d\n",goldbach_partition(N));
    }
    return 0;
}