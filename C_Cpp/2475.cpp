//BOJ 2475 - BRONZ 5
//https://www.acmicpc.net/problem/2475
#include <iostream>
using namespace std;
int a,sum=0;

int main(){
    for(int i = 0; i < 5; i++){
        cin >> a;
        sum += a*a;
    }
    cout << sum % 10;
}