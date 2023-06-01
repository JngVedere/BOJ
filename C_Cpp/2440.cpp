//BOJ 2440 - BRONZ 4
//https://www.acmicpc.net/problem/2440
#include <iostream>
using namespace std;
int t;

int main(){
    cin >> t;
    for(int i = t; i > 0; i--){
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
}