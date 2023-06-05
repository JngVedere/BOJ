//BOJ 20352 - BRONZ 2
//https://www.acmicpc.net/problem/20352
#include <iostream>
#include <cmath>
#define PI 3.14159265359
using namespace std;
double a;

int main(){
    cin >> a;
    cout.precision(10);
    cout << fixed;
    cout << sqrt(a/PI) * 2 * PI;
}