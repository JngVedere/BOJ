//BOJ 10101 - BRONZ 4
//https://www.acmicpc.net/problem/10101
#include <iostream>
using namespace std;

int main(){
    int sum = 0, angle[3] = {0,};
    for(int i = 0; i < 3; i++){
        scanf("%d", &angle[i]);
        sum += angle[i];
    }

    if(sum != 180){
        printf("Error");
    }else if(angle[0]==angle[1] && angle[1]==angle[2]){
        printf("Equilateral");
    }else if(angle[0]!=angle[1] && angle[1]!=angle[2] && angle[0]!=angle[2]){
        printf("Scalene");
    }else{
        printf("Isosceles");
    }
    return 0;
}