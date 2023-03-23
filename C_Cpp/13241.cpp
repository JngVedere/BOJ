//BOJ 13241 - SILVER 5
//https://www.acmicpc.net/problem/13241

//Solved using Euclidean Algorithm..
//in detail -> https://ko.wikipedia.org/wiki/%EC%9C%A0%ED%81%B4%EB%A6%AC%EB%93%9C_%ED%98%B8%EC%A0%9C%EB%B2%95
#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b){
    while(b!=0){
        long long int tmp = a % b;
        a = b;
        b = tmp;
    }
    return abs(a);
}

int main(){
    long long int A,B;
    scanf("%lld %lld",&A,&B);
    printf("%lld",(A*B)/gcd(A,B));
    return 0;
}