//BOJ 10810 - BRONZ 3
//https://www.acmicpc.net/problem/10810

#include <iostream>

int main(){
    int baskets, input_lines, a,b,c;
    std::cin >> baskets >> input_lines;
    
    int* basket_array = (int*)calloc(baskets, sizeof(int));
    for(int i = 0; i < input_lines; i++){
        std::cin >> a >> b >> c;
        for(int j = a-1; j<b; j++){
            basket_array[j] = c;
        }
    }

    for(int k = 0; k < baskets; k++){
        std::cout << basket_array[k] << " ";
    }

    free(basket_array);
    return 0;
}
