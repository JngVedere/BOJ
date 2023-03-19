//BOJ 9506 - BRONZ 1
//https://www.acmicpc.net/problem/9506
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    while(true){
        int N, sum = 0;
        scanf("%d",&N);
        if(N==-1) break;

        deque<int> divisors;
        divisors.clear();

        for(int i = 1; i <= 10000; i++){
            if(i >= N ) break;
            if(N%i == 0){
                sum += i;
                divisors.push_back(i);
            }
        }

        if(sum == N){
            printf("%d = ", N);
            for(int i = 0; i <= divisors.size(); i++){
                printf("%d",divisors[i]);
                if(i == divisors.size()-1){
                    printf("\n");
                    break;
                }
                printf(" + ");
            }
        }else{
            printf("%d is NOT perfect.\n", N);
        }
    }
    return 0;
}