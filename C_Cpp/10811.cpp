//BOJ 10811 - BRONZ 2
//https://www.acmicpc.net/problem/10811
#include <iostream>
#include <algorithm>

int main(){
    int N, M, a, b;
    std::cin >> N >> M;
    int* baskets = new int[N+1]; //cpp style dynamic allocation

    for(int i = 1; i<=N; i++){
        baskets[i] = i;
    }

    while(M--){
        std::cin >> a >> b;

        for(int k=0;k<=(b-a)/2;k++){
            std::swap(baskets[a+k],baskets[b-k]);
        }
    }

    for(int i = 1; i<=N; i++){
        std::cout << baskets[i] << " ";
    }

}