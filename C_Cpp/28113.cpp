//BOJ 28113 - BRONZ 5
//https://www.acmicpc.net/problem/28113
#include <iostream>
using namespace std;
int n,a,b,t;

int main(){
    cin >> n >> a >> b;
    if(a == b) cout << "Anything";
    else cout << (a > b? "Subway" : "Bus");
}