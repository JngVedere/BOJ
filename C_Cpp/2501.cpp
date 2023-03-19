//BOJ 5086 - BRONZ 3
//https://www.acmicpc.net/problem/5086
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    deque<int> divisors;
    for(int i = 1; i <= 10000; i++){
        if(N%i == 0){
            divisors.push_back(i);
        }
    }

    if(K > divisors.size()){
        printf("0");
    }else{
        printf("%d", divisors[K-1]);
    }
    return 0;
}