//BOJ 10798 - BRONZ 1
//https://www.acmicpc.net/problem/10798
#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[5][16] = {'\0',};
    for(int i = 0; i<5; i++){
        cin >> str[i];
    }

    for(int j = 0;j < 15;j++){
        for(int i = 0; i<5; i++){
            if(str[i][j]!='\0') cout << str[i][j];
        }
    }
    return 0;
}