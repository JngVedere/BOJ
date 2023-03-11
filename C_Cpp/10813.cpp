//BOJ 10813 - BRONZ 2
//https://www.acmicpc.net/problem/10813

#include <iostream>

int main(){
    int N, M, a, b;
    std::cin >> N >> M;
    int* baskets = (int*)calloc(N, sizeof(int));

    for(int i = 0; i < N; i++){
        baskets[i] = i+1;
    }

    for(int j = 0; j < M; j++){
        std::cin >> a >> b;
        int temp = baskets[a-1];
        baskets[a-1] = baskets[b-1];
        baskets[b-1] = temp;
    }

    for(int k = 0; k < N; k++){
        std::cout << baskets[k] << " ";
    }
    
    free(baskets);
    return 0 ;
}