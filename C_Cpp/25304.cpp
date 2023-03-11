// BOJ 25304 - BRONZ 5
// https://www.acmicpc.net/problem/25304
#include <iostream>
#include <string>

int main(){
    int total_price, goods, sum=0;
    int prices[100], stocks[100];

    std::cin >> total_price;
    std::cin >> goods;

    for(int i = 0; i<goods; i++){
        std::cin >> prices[i] >> stocks[i];
        sum += int(prices[i] * stocks[i]);
    }
    
    if(sum==total_price){
        std::cout << "Yes";
    }else{
        std::cout << "No";
    }
    return 0;
}