//BOJ 21293 - UNKNOWN 0
//https://www.acmicpc.net/problem/21293
#include <iostream>
using namespace std;

int main(){
    int input[25];
    for( int i = 24; i >= 0 ; i--){
        cin >> input[i];
    }
    cout << input[0]-input[1] << endl;
    cout << input[0]*input[1] << endl;
    cout << input[0]+input[1]+1 << endl;
    return 0;
}