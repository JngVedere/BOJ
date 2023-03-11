// BOJ 25314 - BRONZ 5
//https://www.acmicpc.net/problem/25314
#include <iostream>
#include <string>

int main(){
    int input_number;
    std::cin >> input_number;
    input_number = int(input_number/4);

    for(int i =0;i<input_number;i++){
        std::cout << "long ";
    }
    std::cout << "int";
    return 0;
}