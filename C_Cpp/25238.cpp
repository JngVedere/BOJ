//BOJ 25238 - BRONZ 5
//https://www.acmicpc.net/problem/25238
#include <iostream>
using namespace std;
double a,b;

int main(){
    cin >> a >> b;
    a = a * (100 - b) / 100;
    cout << (a < 100);
}