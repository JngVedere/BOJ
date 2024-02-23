//BOJ 4344 - BRONZ 1
//https://www.acmicpc.net/problem/4344
#include <iostream>
int T;
double C, tmp[1000], sum, avg, over;

int main(){
    std::ios :: sync_with_stdio(false);
    std::cin.tie(NULL);
     
    std::cin >> T;
    std::cout.precision(3);
    std::cout << std::fixed;
    while(T--){
        sum = 0; over = 0;
        std::cin >> C;
        for(int i = 0; i < C; i++){
            std::cin >> tmp[i];
            sum += tmp[i];
        }
        avg = sum / C;
        for(int i = 0; i < C; i++) if(tmp[i] > avg) over++;
        std::cout << over / C * 100 << "%\n";
    }

    return 0;
}