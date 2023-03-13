//BOJ 10812 - BRONZ 2
//https://www.acmicpc.net/problem/10812
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int* baskets = new int[N+1];

    for(int i = 0; i<=N; i++){ //basket array init
        baskets[i] = i;
    }

    while(M--){ //loop for M times
        int a,b,k,t;
        cin >> a >> b >> k;
        t = b-a+1;

        int* temp_array = new int[t];
        for(int i = 0; i < t; i++){
            int j = (k-a+i)%t + a;
            temp_array[i] = baskets[j];
        }

        for(int i = 0; i < t; i++){
            baskets[a+i] = temp_array[i];
        }

        delete(temp_array);
    }
    
    for(int i = 1; i<=N; i++){
        cout << baskets[i] << " ";
    }
    delete(baskets);

    return 0;
}